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

#include "CPACSUIDGroupDefinition.h"
#include "TixiHelper.h"
#include "CTiglLogging.h"
#include "CTiglError.h"
#include "CPACSUIDGroupDefinitions.h"

namespace tigl
{
    namespace generated
    {
        CPACSUIDGroupDefinitions::CPACSUIDGroupDefinitions(){}
        CPACSUIDGroupDefinitions::~CPACSUIDGroupDefinitions() {}
        
        void CPACSUIDGroupDefinitions::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read attribute uID
            if (tixihelper::TixiCheckAttribute(tixiHandle, xpath, "uID")) {
                m_uID = tixihelper::TixiGetAttribute<std::string>(tixiHandle, xpath, "uID");
            }
            
            // read element UIDGroupDefinition
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/UIDGroupDefinition")) {
                tixihelper::TixiReadElements(tixiHandle, xpath + "/UIDGroupDefinition", m_UIDGroupDefinition);
            }
            
        }
        
        void CPACSUIDGroupDefinitions::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write attribute uID
            if (m_uID) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/uID");
                tixihelper::TixiSaveAttribute(tixiHandle, xpath, "uID", *m_uID);
            }
            
            // write element UIDGroupDefinition
            tixihelper::TixiSaveElements(tixiHandle, xpath + "/UIDGroupDefinition", m_UIDGroupDefinition);
            
        }
        
        bool CPACSUIDGroupDefinitions::HasUID() const
        {
            return static_cast<bool>(m_uID);
        }
        
        const std::string& CPACSUIDGroupDefinitions::GetUID() const
        {
            return *m_uID;
        }
        
        void CPACSUIDGroupDefinitions::SetUID(const std::string& value)
        {
            m_uID = value;
        }
        
        const std::vector<unique_ptr<CPACSUIDGroupDefinition>>& CPACSUIDGroupDefinitions::GetUIDGroupDefinition() const
        {
            return m_UIDGroupDefinition;
        }
        
        std::vector<unique_ptr<CPACSUIDGroupDefinition>>& CPACSUIDGroupDefinitions::GetUIDGroupDefinition()
        {
            return m_UIDGroupDefinition;
        }
        
    }
}
