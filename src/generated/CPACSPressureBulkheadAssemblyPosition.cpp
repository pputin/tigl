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
#include "CPACSPressureBulkheadAssemblyPosition.h"

namespace tigl
{
    namespace generated
    {
        CPACSPressureBulkheadAssemblyPosition::CPACSPressureBulkheadAssemblyPosition(){}
        CPACSPressureBulkheadAssemblyPosition::~CPACSPressureBulkheadAssemblyPosition() {}
        
        void CPACSPressureBulkheadAssemblyPosition::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read attribute uID
            if (tixihelper::TixiCheckAttribute(tixiHandle, xpath, "uID")) {
                m_uID = tixihelper::TixiGetAttribute<std::string>(tixiHandle, xpath, "uID");
            }
            
            // read element frameUID
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/frameUID")) {
                m_frameUID = tixihelper::TixiGetElement<std::string>(tixiHandle, xpath + "/frameUID");
            }
            else {
                LOG(ERROR) << "Required element frameUID is missing";
            }
            
            // read element pressureBulkheadElementUID
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/pressureBulkheadElementUID")) {
                m_pressureBulkheadElementUID = tixihelper::TixiGetElement<std::string>(tixiHandle, xpath + "/pressureBulkheadElementUID");
            }
            else {
                LOG(ERROR) << "Required element pressureBulkheadElementUID is missing";
            }
            
        }
        
        void CPACSPressureBulkheadAssemblyPosition::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write attribute uID
            if (m_uID) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/uID");
                tixihelper::TixiSaveAttribute(tixiHandle, xpath, "uID", *m_uID);
            }
            
            // write element frameUID
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/frameUID");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/frameUID", m_frameUID);
            
            // write element pressureBulkheadElementUID
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/pressureBulkheadElementUID");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/pressureBulkheadElementUID", m_pressureBulkheadElementUID);
            
        }
        
        bool CPACSPressureBulkheadAssemblyPosition::HasUID() const
        {
            return static_cast<bool>(m_uID);
        }
        
        const std::string& CPACSPressureBulkheadAssemblyPosition::GetUID() const
        {
            return *m_uID;
        }
        
        void CPACSPressureBulkheadAssemblyPosition::SetUID(const std::string& value)
        {
            m_uID = value;
        }
        
        const std::string& CPACSPressureBulkheadAssemblyPosition::GetFrameUID() const
        {
            return m_frameUID;
        }
        
        void CPACSPressureBulkheadAssemblyPosition::SetFrameUID(const std::string& value)
        {
            m_frameUID = value;
        }
        
        const std::string& CPACSPressureBulkheadAssemblyPosition::GetPressureBulkheadElementUID() const
        {
            return m_pressureBulkheadElementUID;
        }
        
        void CPACSPressureBulkheadAssemblyPosition::SetPressureBulkheadElementUID(const std::string& value)
        {
            m_pressureBulkheadElementUID = value;
        }
        
    }
}
