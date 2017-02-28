// Copyright (c) 2016 RISC Software GmbH
//
// This file was generated by CPACSGen from CPACS XML Schema (c) German Aerospace Center (DLR/SC).
// Do not edit, all changes are lost when files are re-generated.
//
// Licensed under the Apache License, Version 2.0 (the "License")
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <tixi.h>
#include <string>
#include <boost/optional.hpp>
#include "tigl_internal.h"
#include <TiglSymmetryAxis.h>
#include <CCPACSPointListXYZ.h>
#include <CCPACSWingProfileCST.h>

namespace tigl
{
    namespace generated
    {
        // This class is used in:
        // CPACSFuselageProfiles
        // CPACSRotorAirfoils
        // CPACSWingAirfoils
        
        // generated from /xsd:schema/xsd:complexType[707]
        class CPACSProfileGeometry
        {
        public:
            TIGL_EXPORT CPACSProfileGeometry();
            TIGL_EXPORT virtual ~CPACSProfileGeometry();
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT bool HasSymmetry() const;
            TIGL_EXPORT const TiglSymmetryAxis& GetSymmetry() const;
            TIGL_EXPORT void SetSymmetry(const TiglSymmetryAxis& value);
            
            TIGL_EXPORT const std::string& GetUID() const;
            TIGL_EXPORT void SetUID(const std::string& value);
            
            TIGL_EXPORT const std::string& GetName() const;
            TIGL_EXPORT void SetName(const std::string& value);
            
            TIGL_EXPORT bool HasDescription() const;
            TIGL_EXPORT const std::string& GetDescription() const;
            TIGL_EXPORT void SetDescription(const std::string& value);
            
            TIGL_EXPORT bool HasPointList_choice1() const;
            TIGL_EXPORT const CCPACSPointListXYZ& GetPointList_choice1() const;
            TIGL_EXPORT CCPACSPointListXYZ& GetPointList_choice1();
            
            TIGL_EXPORT bool HasCst2D_choice2() const;
            TIGL_EXPORT const CCPACSWingProfileCST& GetCst2D_choice2() const;
            TIGL_EXPORT CCPACSWingProfileCST& GetCst2D_choice2();
            
        protected:
            boost::optional<TiglSymmetryAxis>     m_symmetry;
            std::string                           m_uID;
            std::string                           m_name;
            boost::optional<std::string>          m_description;
            boost::optional<CCPACSPointListXYZ>   m_pointList_choice1;
            boost::optional<CCPACSWingProfileCST> m_cst2D_choice2;
            
        private:
            #ifdef HAVE_CPP11
            CPACSProfileGeometry(const CPACSProfileGeometry&) = delete;
            CPACSProfileGeometry& operator=(const CPACSProfileGeometry&) = delete;
            
            CPACSProfileGeometry(CPACSProfileGeometry&&) = delete;
            CPACSProfileGeometry& operator=(CPACSProfileGeometry&&) = delete;
            #else
            CPACSProfileGeometry(const CPACSProfileGeometry&);
            CPACSProfileGeometry& operator=(const CPACSProfileGeometry&);
            #endif
        };
    }
    
    // This type is not customized, create alias in tigl namespace
    #ifdef CPP11
    using CCPACSProfileGeometry = generated::CPACSProfileGeometry;
    #else
    typedef generated::CPACSProfileGeometry CCPACSProfileGeometry;
    #endif
}
