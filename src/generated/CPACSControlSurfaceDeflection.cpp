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
#include "CPACSControlSurfaceDeflection.h"

namespace tigl
{
    namespace generated
    {
        CPACSControlSurfaceDeflection::CPACSControlSurfaceDeflection(){}
        CPACSControlSurfaceDeflection::~CPACSControlSurfaceDeflection() {}
        
        void CPACSControlSurfaceDeflection::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read element controlSurfaceUID
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/controlSurfaceUID")) {
                m_controlSurfaceUID = tixihelper::TixiGetElement<std::string>(tixiHandle, xpath + "/controlSurfaceUID");
            }
            else {
                LOG(ERROR) << "Required element controlSurfaceUID is missing";
            }
            
            // read element relDeflection
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/relDeflection")) {
                m_relDeflection = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/relDeflection");
            }
            else {
                LOG(ERROR) << "Required element relDeflection is missing";
            }
            
        }
        
        void CPACSControlSurfaceDeflection::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write element controlSurfaceUID
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/controlSurfaceUID");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/controlSurfaceUID", m_controlSurfaceUID);
            
            // write element relDeflection
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/relDeflection");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/relDeflection", m_relDeflection);
            
        }
        
        const std::string& CPACSControlSurfaceDeflection::GetControlSurfaceUID() const
        {
            return m_controlSurfaceUID;
        }
        
        void CPACSControlSurfaceDeflection::SetControlSurfaceUID(const std::string& value)
        {
            m_controlSurfaceUID = value;
        }
        
        const double& CPACSControlSurfaceDeflection::GetRelDeflection() const
        {
            return m_relDeflection;
        }
        
        void CPACSControlSurfaceDeflection::SetRelDeflection(const double& value)
        {
            m_relDeflection = value;
        }
        
    }
}
