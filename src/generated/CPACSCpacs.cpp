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
#include "CPACSCpacs.h"

namespace tigl
{
    namespace generated
    {
        CPACSCpacs::CPACSCpacs(){}
        CPACSCpacs::~CPACSCpacs() {}
        
        void CPACSCpacs::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read element header
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/header")) {
                m_header.ReadCPACS(tixiHandle, xpath + "/header");
            }
            else {
                LOG(ERROR) << "Required element header is missing";
            }
            
            // read element vehicles
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/vehicles")) {
                m_vehicles = boost::in_place();
                try {
                    m_vehicles->ReadCPACS(tixiHandle, xpath + "/vehicles");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read vehicles at xpath << " << xpath << ": " << e.what();
                    m_vehicles = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read vehicles at xpath << " << xpath << ": " << e.getError();
                    m_vehicles = boost::none;
                }
            }
            
            // read element toolspecific
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/toolspecific")) {
                m_toolspecific = boost::in_place();
                try {
                    m_toolspecific->ReadCPACS(tixiHandle, xpath + "/toolspecific");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read toolspecific at xpath << " << xpath << ": " << e.what();
                    m_toolspecific = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read toolspecific at xpath << " << xpath << ": " << e.getError();
                    m_toolspecific = boost::none;
                }
            }
            
        }
        
        void CPACSCpacs::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write element header
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/header");
            m_header.WriteCPACS(tixiHandle, xpath + "/header");
            
            // write element vehicles
            if (m_vehicles) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/vehicles");
                m_vehicles->WriteCPACS(tixiHandle, xpath + "/vehicles");
            }
            
            // write element toolspecific
            if (m_toolspecific) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/toolspecific");
                m_toolspecific->WriteCPACS(tixiHandle, xpath + "/toolspecific");
            }
            
        }
        
        const CCPACSHeader& CPACSCpacs::GetHeader() const
        {
            return m_header;
        }
        
        CCPACSHeader& CPACSCpacs::GetHeader()
        {
            return m_header;
        }
        
        bool CPACSCpacs::HasVehicles() const
        {
            return static_cast<bool>(m_vehicles);
        }
        
        const CPACSVehicles& CPACSCpacs::GetVehicles() const
        {
            return *m_vehicles;
        }
        
        CPACSVehicles& CPACSCpacs::GetVehicles()
        {
            return *m_vehicles;
        }
        
        bool CPACSCpacs::HasToolspecific() const
        {
            return static_cast<bool>(m_toolspecific);
        }
        
        const CPACSToolspecific& CPACSCpacs::GetToolspecific() const
        {
            return *m_toolspecific;
        }
        
        CPACSToolspecific& CPACSCpacs::GetToolspecific()
        {
            return *m_toolspecific;
        }
        
    }
}
