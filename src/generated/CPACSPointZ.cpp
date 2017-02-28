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
#include "CPACSPointZ.h"

namespace tigl
{
    namespace generated
    {
        CPACSPointZ::CPACSPointZ(){}
        CPACSPointZ::~CPACSPointZ() {}
        
        void CPACSPointZ::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read attribute uID
            if (tixihelper::TixiCheckAttribute(tixiHandle, xpath, "uID")) {
                m_uID = tixihelper::TixiGetAttribute<std::string>(tixiHandle, xpath, "uID");
            }
            
            // read element z
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/z")) {
                m_z = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/z");
            }
            else {
                LOG(ERROR) << "Required element z is missing";
            }
            
        }
        
        void CPACSPointZ::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write attribute uID
            if (m_uID) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/uID");
                tixihelper::TixiSaveAttribute(tixiHandle, xpath, "uID", *m_uID);
            }
            
            // write element z
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/z");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/z", m_z);
            
        }
        
        bool CPACSPointZ::HasUID() const
        {
            return static_cast<bool>(m_uID);
        }
        
        const std::string& CPACSPointZ::GetUID() const
        {
            return *m_uID;
        }
        
        void CPACSPointZ::SetUID(const std::string& value)
        {
            m_uID = value;
        }
        
        const double& CPACSPointZ::GetZ() const
        {
            return m_z;
        }
        
        void CPACSPointZ::SetZ(const double& value)
        {
            m_z = value;
        }
        
    }
}
