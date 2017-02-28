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
#include "CPACSMWingBox.h"

namespace tigl
{
    namespace generated
    {
        CPACSMWingBox::CPACSMWingBox(){}
        CPACSMWingBox::~CPACSMWingBox() {}
        
        void CPACSMWingBox::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read element massDescription
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/massDescription")) {
                m_massDescription.ReadCPACS(tixiHandle, xpath + "/massDescription");
            }
            else {
                LOG(ERROR) << "Required element massDescription is missing";
            }
            
            // read element mSkins
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/mSkins")) {
                m_mSkins = boost::in_place();
                try {
                    m_mSkins->ReadCPACS(tixiHandle, xpath + "/mSkins");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read mSkins at xpath << " << xpath << ": " << e.what();
                    m_mSkins = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read mSkins at xpath << " << xpath << ": " << e.getError();
                    m_mSkins = boost::none;
                }
            }
            
            // read element mSpars
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/mSpars")) {
                m_mSpars = boost::in_place();
                try {
                    m_mSpars->ReadCPACS(tixiHandle, xpath + "/mSpars");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read mSpars at xpath << " << xpath << ": " << e.what();
                    m_mSpars = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read mSpars at xpath << " << xpath << ": " << e.getError();
                    m_mSpars = boost::none;
                }
            }
            
            // read element mRibs
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/mRibs")) {
                m_mRibs = boost::in_place();
                try {
                    m_mRibs->ReadCPACS(tixiHandle, xpath + "/mRibs");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read mRibs at xpath << " << xpath << ": " << e.what();
                    m_mRibs = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read mRibs at xpath << " << xpath << ": " << e.getError();
                    m_mRibs = boost::none;
                }
            }
            
            // read element mFixedLeadingEdge
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/mFixedLeadingEdge")) {
                m_mFixedLeadingEdge = boost::in_place();
                try {
                    m_mFixedLeadingEdge->ReadCPACS(tixiHandle, xpath + "/mFixedLeadingEdge");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read mFixedLeadingEdge at xpath << " << xpath << ": " << e.what();
                    m_mFixedLeadingEdge = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read mFixedLeadingEdge at xpath << " << xpath << ": " << e.getError();
                    m_mFixedLeadingEdge = boost::none;
                }
            }
            
            // read element mFixedTrailingEdge
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/mFixedTrailingEdge")) {
                m_mFixedTrailingEdge = boost::in_place();
                try {
                    m_mFixedTrailingEdge->ReadCPACS(tixiHandle, xpath + "/mFixedTrailingEdge");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read mFixedTrailingEdge at xpath << " << xpath << ": " << e.what();
                    m_mFixedTrailingEdge = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read mFixedTrailingEdge at xpath << " << xpath << ": " << e.getError();
                    m_mFixedTrailingEdge = boost::none;
                }
            }
            
        }
        
        void CPACSMWingBox::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write element massDescription
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/massDescription");
            m_massDescription.WriteCPACS(tixiHandle, xpath + "/massDescription");
            
            // write element mSkins
            if (m_mSkins) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/mSkins");
                m_mSkins->WriteCPACS(tixiHandle, xpath + "/mSkins");
            }
            
            // write element mSpars
            if (m_mSpars) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/mSpars");
                m_mSpars->WriteCPACS(tixiHandle, xpath + "/mSpars");
            }
            
            // write element mRibs
            if (m_mRibs) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/mRibs");
                m_mRibs->WriteCPACS(tixiHandle, xpath + "/mRibs");
            }
            
            // write element mFixedLeadingEdge
            if (m_mFixedLeadingEdge) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/mFixedLeadingEdge");
                m_mFixedLeadingEdge->WriteCPACS(tixiHandle, xpath + "/mFixedLeadingEdge");
            }
            
            // write element mFixedTrailingEdge
            if (m_mFixedTrailingEdge) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/mFixedTrailingEdge");
                m_mFixedTrailingEdge->WriteCPACS(tixiHandle, xpath + "/mFixedTrailingEdge");
            }
            
        }
        
        const CPACSGenericMass& CPACSMWingBox::GetMassDescription() const
        {
            return m_massDescription;
        }
        
        CPACSGenericMass& CPACSMWingBox::GetMassDescription()
        {
            return m_massDescription;
        }
        
        bool CPACSMWingBox::HasMSkins() const
        {
            return static_cast<bool>(m_mSkins);
        }
        
        const CPACSMSkins& CPACSMWingBox::GetMSkins() const
        {
            return *m_mSkins;
        }
        
        CPACSMSkins& CPACSMWingBox::GetMSkins()
        {
            return *m_mSkins;
        }
        
        bool CPACSMWingBox::HasMSpars() const
        {
            return static_cast<bool>(m_mSpars);
        }
        
        const CPACSMSpars& CPACSMWingBox::GetMSpars() const
        {
            return *m_mSpars;
        }
        
        CPACSMSpars& CPACSMWingBox::GetMSpars()
        {
            return *m_mSpars;
        }
        
        bool CPACSMWingBox::HasMRibs() const
        {
            return static_cast<bool>(m_mRibs);
        }
        
        const CPACSMRibs& CPACSMWingBox::GetMRibs() const
        {
            return *m_mRibs;
        }
        
        CPACSMRibs& CPACSMWingBox::GetMRibs()
        {
            return *m_mRibs;
        }
        
        bool CPACSMWingBox::HasMFixedLeadingEdge() const
        {
            return static_cast<bool>(m_mFixedLeadingEdge);
        }
        
        const CPACSMFixedLeadingEdge& CPACSMWingBox::GetMFixedLeadingEdge() const
        {
            return *m_mFixedLeadingEdge;
        }
        
        CPACSMFixedLeadingEdge& CPACSMWingBox::GetMFixedLeadingEdge()
        {
            return *m_mFixedLeadingEdge;
        }
        
        bool CPACSMWingBox::HasMFixedTrailingEdge() const
        {
            return static_cast<bool>(m_mFixedTrailingEdge);
        }
        
        const CPACSMFixedTrailingEdge& CPACSMWingBox::GetMFixedTrailingEdge() const
        {
            return *m_mFixedTrailingEdge;
        }
        
        CPACSMFixedTrailingEdge& CPACSMWingBox::GetMFixedTrailingEdge()
        {
            return *m_mFixedTrailingEdge;
        }
        
    }
}
