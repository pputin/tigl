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
#include "CPACSMManufacturerEmpty.h"

namespace tigl
{
    namespace generated
    {
        CPACSMManufacturerEmpty::CPACSMManufacturerEmpty(){}
        CPACSMManufacturerEmpty::~CPACSMManufacturerEmpty() {}
        
        void CPACSMManufacturerEmpty::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read element massDescription
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/massDescription")) {
                m_massDescription.ReadCPACS(tixiHandle, xpath + "/massDescription");
            }
            else {
                LOG(ERROR) << "Required element massDescription is missing";
            }
            
            // read element mStructure
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/mStructure")) {
                m_mStructure = boost::in_place();
                try {
                    m_mStructure->ReadCPACS(tixiHandle, xpath + "/mStructure");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read mStructure at xpath << " << xpath << ": " << e.what();
                    m_mStructure = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read mStructure at xpath << " << xpath << ": " << e.getError();
                    m_mStructure = boost::none;
                }
            }
            
            // read element mPowerUnits
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/mPowerUnits")) {
                m_mPowerUnits = boost::in_place();
                try {
                    m_mPowerUnits->ReadCPACS(tixiHandle, xpath + "/mPowerUnits");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read mPowerUnits at xpath << " << xpath << ": " << e.what();
                    m_mPowerUnits = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read mPowerUnits at xpath << " << xpath << ": " << e.getError();
                    m_mPowerUnits = boost::none;
                }
            }
            
            // read element mSystems
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/mSystems")) {
                m_mSystems = boost::in_place();
                try {
                    m_mSystems->ReadCPACS(tixiHandle, xpath + "/mSystems");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read mSystems at xpath << " << xpath << ": " << e.what();
                    m_mSystems = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read mSystems at xpath << " << xpath << ": " << e.getError();
                    m_mSystems = boost::none;
                }
            }
            
            // read element mFurnishing
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/mFurnishing")) {
                m_mFurnishing = boost::in_place();
                try {
                    m_mFurnishing->ReadCPACS(tixiHandle, xpath + "/mFurnishing");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read mFurnishing at xpath << " << xpath << ": " << e.what();
                    m_mFurnishing = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read mFurnishing at xpath << " << xpath << ": " << e.getError();
                    m_mFurnishing = boost::none;
                }
            }
            
        }
        
        void CPACSMManufacturerEmpty::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write element massDescription
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/massDescription");
            m_massDescription.WriteCPACS(tixiHandle, xpath + "/massDescription");
            
            // write element mStructure
            if (m_mStructure) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/mStructure");
                m_mStructure->WriteCPACS(tixiHandle, xpath + "/mStructure");
            }
            
            // write element mPowerUnits
            if (m_mPowerUnits) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/mPowerUnits");
                m_mPowerUnits->WriteCPACS(tixiHandle, xpath + "/mPowerUnits");
            }
            
            // write element mSystems
            if (m_mSystems) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/mSystems");
                m_mSystems->WriteCPACS(tixiHandle, xpath + "/mSystems");
            }
            
            // write element mFurnishing
            if (m_mFurnishing) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/mFurnishing");
                m_mFurnishing->WriteCPACS(tixiHandle, xpath + "/mFurnishing");
            }
            
        }
        
        const CPACSGenericMass& CPACSMManufacturerEmpty::GetMassDescription() const
        {
            return m_massDescription;
        }
        
        CPACSGenericMass& CPACSMManufacturerEmpty::GetMassDescription()
        {
            return m_massDescription;
        }
        
        bool CPACSMManufacturerEmpty::HasMStructure() const
        {
            return static_cast<bool>(m_mStructure);
        }
        
        const CPACSMStructure& CPACSMManufacturerEmpty::GetMStructure() const
        {
            return *m_mStructure;
        }
        
        CPACSMStructure& CPACSMManufacturerEmpty::GetMStructure()
        {
            return *m_mStructure;
        }
        
        bool CPACSMManufacturerEmpty::HasMPowerUnits() const
        {
            return static_cast<bool>(m_mPowerUnits);
        }
        
        const CPACSMPowerUnits& CPACSMManufacturerEmpty::GetMPowerUnits() const
        {
            return *m_mPowerUnits;
        }
        
        CPACSMPowerUnits& CPACSMManufacturerEmpty::GetMPowerUnits()
        {
            return *m_mPowerUnits;
        }
        
        bool CPACSMManufacturerEmpty::HasMSystems() const
        {
            return static_cast<bool>(m_mSystems);
        }
        
        const CPACSMSystems& CPACSMManufacturerEmpty::GetMSystems() const
        {
            return *m_mSystems;
        }
        
        CPACSMSystems& CPACSMManufacturerEmpty::GetMSystems()
        {
            return *m_mSystems;
        }
        
        bool CPACSMManufacturerEmpty::HasMFurnishing() const
        {
            return static_cast<bool>(m_mFurnishing);
        }
        
        const CPACSMFurnishing& CPACSMManufacturerEmpty::GetMFurnishing() const
        {
            return *m_mFurnishing;
        }
        
        CPACSMFurnishing& CPACSMManufacturerEmpty::GetMFurnishing()
        {
            return *m_mFurnishing;
        }
        
    }
}
