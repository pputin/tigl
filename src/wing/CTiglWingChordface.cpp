/*
* Copyright (C) 2017 German Aerospace Center (DLR/SC)
*
* Created: 2017-05-15 Martin Siggel <martin.siggel@dlr.de>
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#include "CTiglWingChordface.h"

#include "CNamedShape.h"

#include <TColgp_Array2OfPnt.hxx>
#include <TColStd_Array1OfReal.hxx>
#include <TColStd_Array1OfInteger.hxx>
#include <TopoDS_Face.hxx>

#include <BRepBuilderAPI_MakeFace.hxx>

#include <cassert>

namespace tigl
{


CTiglWingChordface::CTiglWingChordface(const std::vector<CCPACSWingSegment*> &segments,
                                       CTiglUIDManager *uidMgr)
    : _uid("chordface")
    , _segments(segments)
    , _uidManager(uidMgr)
{
}

CTiglWingChordface::~CTiglWingChordface()
{
    try {
        if (_uidManager && _uidManager->HasGeometricComponent(_uid)) {
            _uidManager->UnregisterObject(GetDefaultedUID());
        }
    }
    catch(...){}
}

gp_Pnt CTiglWingChordface::GetPoint(double eta, double xsi) const
{
    BuildChordSurface();

    return _chordSurface->Value(xsi, eta);
}

void CTiglWingChordface::SetUID(const std::string &uid)
{
    try {
        if (_uidManager && _uidManager->HasGeometricComponent(GetDefaultedUID())) {
            _uidManager->UnregisterObject(GetDefaultedUID());
        }
    }
    catch(...){}

    _uid = uid;

    if (_uidManager) {
        _uidManager->AddGeometricComponent(GetDefaultedUID(), this);
    }
}

void CTiglWingChordface::Reset()
{
    _chordSurface.Nullify();
    CTiglAbstractGeometricComponent::Reset();
}

std::string CTiglWingChordface::GetDefaultedUID() const
{
    return _uid;
}

PNamedShape CTiglWingChordface::BuildLoft()
{

    BuildChordSurface();

    assert(!_chordSurface.IsNull());

    TopoDS_Face face = BRepBuilderAPI_MakeFace(_chordSurface, Precision::Confusion());

    PNamedShape chordFace( new CNamedShape(face, GetDefaultedUID().c_str()));

    return chordFace;
}

void CTiglWingChordface::BuildChordSurface() const
{
    if (_chordSurface.IsNull()) {

        TColgp_Array2OfPnt poles(1, 2, 1, _segments.size() + 1);

        int vPole = 1;
        for (SegmentList::const_iterator it = _segments.begin(); it != _segments.end(); ++it) {
            CCPACSWingSegment* segment =*it;

            gp_Pnt frontInner = segment->GetChordPoint(0., 0.);
            gp_Pnt backInner = segment->GetChordPoint(0., 1.);

            poles.SetValue(1, vPole, frontInner);
            poles.SetValue(2, vPole, backInner);

            vPole++;
        }

        CCPACSWingSegment* outerSegment = _segments.back();
        poles.SetValue(1, vPole, outerSegment->GetChordPoint(1., 0.));
        poles.SetValue(2, vPole, outerSegment->GetChordPoint(1., 1.));

        // compute knots
        TColStd_Array1OfReal vKnots(1, poles.UpperCol());
        TColStd_Array1OfInteger vMults(1, vKnots.Upper());
        vKnots.SetValue(1, 0.);
        for (vPole = 2; vPole <= poles.UpperCol(); ++vPole) {
            gp_Pnt frontInner = poles(1, vPole-1);
            gp_Pnt frontOuter = poles(1, vPole);
            gp_Pnt backInner = poles(2, vPole-1);
            gp_Pnt backOuter = poles(2, vPole);

            gp_Pnt innerMiddle = (frontInner.XYZ() + backInner.XYZ()) * 0.5;
            gp_Pnt outerMiddle = (frontOuter.XYZ() + backOuter.XYZ()) * 0.5;

            double dist = innerMiddle.Distance(outerMiddle);
            vKnots.SetValue(vPole, dist + vKnots.Value(vPole-1));
        }

        // normalize to [0,1] and set vMults
        double norm = 1./ vKnots.Value(vKnots.Upper());
        for (int vKnot = 2; vKnot <= vKnots.Upper(); ++vKnot) {
            vKnots.SetValue(vKnot, vKnots.Value(vKnot) * norm);

            vMults.SetValue(vKnot, 1);
        }
        vMults.SetValue(1, 2);
        vMults.SetValue(vMults.Upper(), 2);

        TColStd_Array1OfReal uKnots(1, 2);
        uKnots.SetValue(1, 0.);
        uKnots.SetValue(2, 1.);

        TColStd_Array1OfInteger uMults(1, 2);
        uMults.SetValue(1, 2);
        uMults.SetValue(2, 2);

        _chordSurface = new Geom_BSplineSurface(poles, uKnots, vKnots, uMults, vMults, 1, 1);
    }
}

std::vector<double> CTiglWingChordface::GetElementEtas() const
{
    BuildChordSurface();

    std::vector<double> etas;

    // return the vknots
    for (int iElement = 1; iElement <= _chordSurface->NbVKnots(); ++iElement) {
        etas.push_back(_chordSurface->VKnot(iElement));
    }

    return etas;
}



} // namespace tigl