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

#include "CPACSCFDTool.h"
#include "CTiglError.h"
#include "CTiglLogging.h"
#include "TixiHelper.h"

namespace tigl
{
    namespace generated
    {
        CPACSCFDTool::CPACSCFDTool() {}
        
        CPACSCFDTool::~CPACSCFDTool() {}
        
        void CPACSCFDTool::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read element tool
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/tool")) {
                m_tool.ReadCPACS(tixiHandle, xpath + "/tool");
            }
            else {
                LOG(ERROR) << "Required element tool is missing at xpath " << xpath;
            }
            
            // read element aircraftModelUID
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/aircraftModelUID")) {
                m_aircraftModelUID = tixihelper::TixiGetElement<std::string>(tixiHandle, xpath + "/aircraftModelUID");
                if (m_aircraftModelUID.empty()) {
                    LOG(WARNING) << "Required element aircraftModelUID is empty at xpath " << xpath;
                }
            }
            else {
                LOG(ERROR) << "Required element aircraftModelUID is missing at xpath " << xpath;
            }
            
            // read element farField
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/farField")) {
                m_farField.ReadCPACS(tixiHandle, xpath + "/farField");
            }
            else {
                LOG(ERROR) << "Required element farField is missing at xpath " << xpath;
            }
            
        }
        
        void CPACSCFDTool::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write element tool
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/tool");
            m_tool.WriteCPACS(tixiHandle, xpath + "/tool");
            
            // write element aircraftModelUID
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/aircraftModelUID");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/aircraftModelUID", m_aircraftModelUID);
            
            // write element farField
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/farField");
            m_farField.WriteCPACS(tixiHandle, xpath + "/farField");
            
        }
        
        const CPACSTool& CPACSCFDTool::GetTool() const
        {
            return m_tool;
        }
        
        CPACSTool& CPACSCFDTool::GetTool()
        {
            return m_tool;
        }
        
        const std::string& CPACSCFDTool::GetAircraftModelUID() const
        {
            return m_aircraftModelUID;
        }
        
        void CPACSCFDTool::SetAircraftModelUID(const std::string& value)
        {
            m_aircraftModelUID = value;
        }
        
        const CCPACSFarField& CPACSCFDTool::GetFarField() const
        {
            return m_farField;
        }
        
        CCPACSFarField& CPACSCFDTool::GetFarField()
        {
            return m_farField;
        }
        
    }
}