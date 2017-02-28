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
#include "CPACSControlInput.h"

namespace tigl
{
    namespace generated
    {
        CPACSControlInput::CPACSControlInput(){}
        CPACSControlInput::~CPACSControlInput() {}
        
        void CPACSControlInput::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read element cockpitControlUID
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/cockpitControlUID")) {
                m_cockpitControlUID = tixihelper::TixiGetElement<std::string>(tixiHandle, xpath + "/cockpitControlUID");
            }
            else {
                LOG(ERROR) << "Required element cockpitControlUID is missing";
            }
            
            // read element value
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/value")) {
                m_value.ReadCPACS(tixiHandle, xpath + "/value");
            }
            else {
                LOG(ERROR) << "Required element value is missing";
            }
            
        }
        
        void CPACSControlInput::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write element cockpitControlUID
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/cockpitControlUID");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/cockpitControlUID", m_cockpitControlUID);
            
            // write element value
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/value");
            m_value.WriteCPACS(tixiHandle, xpath + "/value");
            
        }
        
        const std::string& CPACSControlInput::GetCockpitControlUID() const
        {
            return m_cockpitControlUID;
        }
        
        void CPACSControlInput::SetCockpitControlUID(const std::string& value)
        {
            m_cockpitControlUID = value;
        }
        
        const CCPACSStringVector& CPACSControlInput::GetValue() const
        {
            return m_value;
        }
        
        CCPACSStringVector& CPACSControlInput::GetValue()
        {
            return m_value;
        }
        
    }
}
