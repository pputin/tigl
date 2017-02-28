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

#include "TixiHelper.h"
#include "CTiglLogging.h"
#include "CTiglError.h"
#include "CPACSContourReference.h"

namespace tigl
{
    namespace generated
    {
        CPACSContourReference::CPACSContourReference(){}
        CPACSContourReference::~CPACSContourReference() {}
        
        void CPACSContourReference::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read element airfoilUID
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/airfoilUID")) {
                m_airfoilUID = tixihelper::TixiGetElement<std::string>(tixiHandle, xpath + "/airfoilUID");
            }
            else {
                LOG(ERROR) << "Required element airfoilUID is missing";
            }
            
            // read element rotX
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/rotX")) {
                m_rotX = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/rotX");
            }
            else {
                LOG(ERROR) << "Required element rotX is missing";
            }
            
            // read element scalY
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/scalY")) {
                m_scalY = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/scalY");
            }
            else {
                LOG(ERROR) << "Required element scalY is missing";
            }
            
            // read element scalZ
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/scalZ")) {
                m_scalZ = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/scalZ");
            }
            else {
                LOG(ERROR) << "Required element scalZ is missing";
            }
            
        }
        
        void CPACSContourReference::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write element airfoilUID
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/airfoilUID");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/airfoilUID", m_airfoilUID);
            
            // write element rotX
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/rotX");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/rotX", m_rotX);
            
            // write element scalY
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/scalY");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/scalY", m_scalY);
            
            // write element scalZ
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/scalZ");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/scalZ", m_scalZ);
            
        }
        
        const std::string& CPACSContourReference::GetAirfoilUID() const
        {
            return m_airfoilUID;
        }
        
        void CPACSContourReference::SetAirfoilUID(const std::string& value)
        {
            m_airfoilUID = value;
        }
        
        const double& CPACSContourReference::GetRotX() const
        {
            return m_rotX;
        }
        
        void CPACSContourReference::SetRotX(const double& value)
        {
            m_rotX = value;
        }
        
        const double& CPACSContourReference::GetScalY() const
        {
            return m_scalY;
        }
        
        void CPACSContourReference::SetScalY(const double& value)
        {
            m_scalY = value;
        }
        
        const double& CPACSContourReference::GetScalZ() const
        {
            return m_scalZ;
        }
        
        void CPACSContourReference::SetScalZ(const double& value)
        {
            m_scalZ = value;
        }
        
    }
}
