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
#include "CPACSMFuselageStructure.h"

namespace tigl
{
    namespace generated
    {
        CPACSMFuselageStructure::CPACSMFuselageStructure(){}
        CPACSMFuselageStructure::~CPACSMFuselageStructure() {}
        
        void CPACSMFuselageStructure::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read element massDescription
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/massDescription")) {
                m_massDescription.ReadCPACS(tixiHandle, xpath + "/massDescription");
            }
            else {
                LOG(ERROR) << "Required element massDescription is missing";
            }
            
            // read element mSkinPanels
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/mSkinPanels")) {
                m_mSkinPanels = boost::in_place();
                try {
                    m_mSkinPanels->ReadCPACS(tixiHandle, xpath + "/mSkinPanels");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read mSkinPanels at xpath << " << xpath << ": " << e.what();
                    m_mSkinPanels = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read mSkinPanels at xpath << " << xpath << ": " << e.getError();
                    m_mSkinPanels = boost::none;
                }
            }
            
            // read element mBulkheads
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/mBulkheads")) {
                m_mBulkheads = boost::in_place();
                try {
                    m_mBulkheads->ReadCPACS(tixiHandle, xpath + "/mBulkheads");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read mBulkheads at xpath << " << xpath << ": " << e.what();
                    m_mBulkheads = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read mBulkheads at xpath << " << xpath << ": " << e.getError();
                    m_mBulkheads = boost::none;
                }
            }
            
            // read element mDoors
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/mDoors")) {
                m_mDoors = boost::in_place();
                try {
                    m_mDoors->ReadCPACS(tixiHandle, xpath + "/mDoors");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read mDoors at xpath << " << xpath << ": " << e.what();
                    m_mDoors = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read mDoors at xpath << " << xpath << ": " << e.getError();
                    m_mDoors = boost::none;
                }
            }
            
            // read element mWindows
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/mWindows")) {
                m_mWindows = boost::in_place();
                try {
                    m_mWindows->ReadCPACS(tixiHandle, xpath + "/mWindows");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read mWindows at xpath << " << xpath << ": " << e.what();
                    m_mWindows = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read mWindows at xpath << " << xpath << ": " << e.getError();
                    m_mWindows = boost::none;
                }
            }
            
            // read element mCabinFloors
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/mCabinFloors")) {
                m_mCabinFloors = boost::in_place();
                try {
                    m_mCabinFloors->ReadCPACS(tixiHandle, xpath + "/mCabinFloors");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read mCabinFloors at xpath << " << xpath << ": " << e.what();
                    m_mCabinFloors = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read mCabinFloors at xpath << " << xpath << ": " << e.getError();
                    m_mCabinFloors = boost::none;
                }
            }
            
            // read element mCargoFloors
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/mCargoFloors")) {
                m_mCargoFloors = boost::in_place();
                try {
                    m_mCargoFloors->ReadCPACS(tixiHandle, xpath + "/mCargoFloors");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read mCargoFloors at xpath << " << xpath << ": " << e.what();
                    m_mCargoFloors = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read mCargoFloors at xpath << " << xpath << ": " << e.getError();
                    m_mCargoFloors = boost::none;
                }
            }
            
            // read element mSpecialStructures
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/mSpecialStructures")) {
                m_mSpecialStructures = boost::in_place();
                try {
                    m_mSpecialStructures->ReadCPACS(tixiHandle, xpath + "/mSpecialStructures");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read mSpecialStructures at xpath << " << xpath << ": " << e.what();
                    m_mSpecialStructures = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read mSpecialStructures at xpath << " << xpath << ": " << e.getError();
                    m_mSpecialStructures = boost::none;
                }
            }
            
            // read element mBellyFairings
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/mBellyFairings")) {
                m_mBellyFairings = boost::in_place();
                try {
                    m_mBellyFairings->ReadCPACS(tixiHandle, xpath + "/mBellyFairings");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read mBellyFairings at xpath << " << xpath << ": " << e.what();
                    m_mBellyFairings = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read mBellyFairings at xpath << " << xpath << ": " << e.getError();
                    m_mBellyFairings = boost::none;
                }
            }
            
            // read element mStringers
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/mStringers")) {
                m_mStringers = boost::in_place();
                try {
                    m_mStringers->ReadCPACS(tixiHandle, xpath + "/mStringers");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read mStringers at xpath << " << xpath << ": " << e.what();
                    m_mStringers = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read mStringers at xpath << " << xpath << ": " << e.getError();
                    m_mStringers = boost::none;
                }
            }
            
            // read element mFrames
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/mFrames")) {
                m_mFrames = boost::in_place();
                try {
                    m_mFrames->ReadCPACS(tixiHandle, xpath + "/mFrames");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read mFrames at xpath << " << xpath << ": " << e.what();
                    m_mFrames = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read mFrames at xpath << " << xpath << ": " << e.getError();
                    m_mFrames = boost::none;
                }
            }
            
        }
        
        void CPACSMFuselageStructure::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write element massDescription
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/massDescription");
            m_massDescription.WriteCPACS(tixiHandle, xpath + "/massDescription");
            
            // write element mSkinPanels
            if (m_mSkinPanels) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/mSkinPanels");
                m_mSkinPanels->WriteCPACS(tixiHandle, xpath + "/mSkinPanels");
            }
            
            // write element mBulkheads
            if (m_mBulkheads) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/mBulkheads");
                m_mBulkheads->WriteCPACS(tixiHandle, xpath + "/mBulkheads");
            }
            
            // write element mDoors
            if (m_mDoors) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/mDoors");
                m_mDoors->WriteCPACS(tixiHandle, xpath + "/mDoors");
            }
            
            // write element mWindows
            if (m_mWindows) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/mWindows");
                m_mWindows->WriteCPACS(tixiHandle, xpath + "/mWindows");
            }
            
            // write element mCabinFloors
            if (m_mCabinFloors) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/mCabinFloors");
                m_mCabinFloors->WriteCPACS(tixiHandle, xpath + "/mCabinFloors");
            }
            
            // write element mCargoFloors
            if (m_mCargoFloors) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/mCargoFloors");
                m_mCargoFloors->WriteCPACS(tixiHandle, xpath + "/mCargoFloors");
            }
            
            // write element mSpecialStructures
            if (m_mSpecialStructures) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/mSpecialStructures");
                m_mSpecialStructures->WriteCPACS(tixiHandle, xpath + "/mSpecialStructures");
            }
            
            // write element mBellyFairings
            if (m_mBellyFairings) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/mBellyFairings");
                m_mBellyFairings->WriteCPACS(tixiHandle, xpath + "/mBellyFairings");
            }
            
            // write element mStringers
            if (m_mStringers) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/mStringers");
                m_mStringers->WriteCPACS(tixiHandle, xpath + "/mStringers");
            }
            
            // write element mFrames
            if (m_mFrames) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/mFrames");
                m_mFrames->WriteCPACS(tixiHandle, xpath + "/mFrames");
            }
            
        }
        
        const CPACSGenericMass& CPACSMFuselageStructure::GetMassDescription() const
        {
            return m_massDescription;
        }
        
        CPACSGenericMass& CPACSMFuselageStructure::GetMassDescription()
        {
            return m_massDescription;
        }
        
        bool CPACSMFuselageStructure::HasMSkinPanels() const
        {
            return static_cast<bool>(m_mSkinPanels);
        }
        
        const CPACSMSkinPanels& CPACSMFuselageStructure::GetMSkinPanels() const
        {
            return *m_mSkinPanels;
        }
        
        CPACSMSkinPanels& CPACSMFuselageStructure::GetMSkinPanels()
        {
            return *m_mSkinPanels;
        }
        
        bool CPACSMFuselageStructure::HasMBulkheads() const
        {
            return static_cast<bool>(m_mBulkheads);
        }
        
        const CPACSMBulkheads& CPACSMFuselageStructure::GetMBulkheads() const
        {
            return *m_mBulkheads;
        }
        
        CPACSMBulkheads& CPACSMFuselageStructure::GetMBulkheads()
        {
            return *m_mBulkheads;
        }
        
        bool CPACSMFuselageStructure::HasMDoors() const
        {
            return static_cast<bool>(m_mDoors);
        }
        
        const CPACSMDoors& CPACSMFuselageStructure::GetMDoors() const
        {
            return *m_mDoors;
        }
        
        CPACSMDoors& CPACSMFuselageStructure::GetMDoors()
        {
            return *m_mDoors;
        }
        
        bool CPACSMFuselageStructure::HasMWindows() const
        {
            return static_cast<bool>(m_mWindows);
        }
        
        const CPACSMWindows& CPACSMFuselageStructure::GetMWindows() const
        {
            return *m_mWindows;
        }
        
        CPACSMWindows& CPACSMFuselageStructure::GetMWindows()
        {
            return *m_mWindows;
        }
        
        bool CPACSMFuselageStructure::HasMCabinFloors() const
        {
            return static_cast<bool>(m_mCabinFloors);
        }
        
        const CPACSMCabinFloors& CPACSMFuselageStructure::GetMCabinFloors() const
        {
            return *m_mCabinFloors;
        }
        
        CPACSMCabinFloors& CPACSMFuselageStructure::GetMCabinFloors()
        {
            return *m_mCabinFloors;
        }
        
        bool CPACSMFuselageStructure::HasMCargoFloors() const
        {
            return static_cast<bool>(m_mCargoFloors);
        }
        
        const CPACSMCargoFloors& CPACSMFuselageStructure::GetMCargoFloors() const
        {
            return *m_mCargoFloors;
        }
        
        CPACSMCargoFloors& CPACSMFuselageStructure::GetMCargoFloors()
        {
            return *m_mCargoFloors;
        }
        
        bool CPACSMFuselageStructure::HasMSpecialStructures() const
        {
            return static_cast<bool>(m_mSpecialStructures);
        }
        
        const CPACSMSpecialStructures& CPACSMFuselageStructure::GetMSpecialStructures() const
        {
            return *m_mSpecialStructures;
        }
        
        CPACSMSpecialStructures& CPACSMFuselageStructure::GetMSpecialStructures()
        {
            return *m_mSpecialStructures;
        }
        
        bool CPACSMFuselageStructure::HasMBellyFairings() const
        {
            return static_cast<bool>(m_mBellyFairings);
        }
        
        const CPACSMBellyFairings& CPACSMFuselageStructure::GetMBellyFairings() const
        {
            return *m_mBellyFairings;
        }
        
        CPACSMBellyFairings& CPACSMFuselageStructure::GetMBellyFairings()
        {
            return *m_mBellyFairings;
        }
        
        bool CPACSMFuselageStructure::HasMStringers() const
        {
            return static_cast<bool>(m_mStringers);
        }
        
        const CPACSMStringers& CPACSMFuselageStructure::GetMStringers() const
        {
            return *m_mStringers;
        }
        
        CPACSMStringers& CPACSMFuselageStructure::GetMStringers()
        {
            return *m_mStringers;
        }
        
        bool CPACSMFuselageStructure::HasMFrames() const
        {
            return static_cast<bool>(m_mFrames);
        }
        
        const CPACSMFrames& CPACSMFuselageStructure::GetMFrames() const
        {
            return *m_mFrames;
        }
        
        CPACSMFrames& CPACSMFuselageStructure::GetMFrames()
        {
            return *m_mFrames;
        }
        
    }
}
