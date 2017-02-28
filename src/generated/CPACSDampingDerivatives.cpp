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
#include "CPACSDampingDerivatives.h"

namespace tigl
{
    namespace generated
    {
        CPACSDampingDerivatives::CPACSDampingDerivatives(){}
        CPACSDampingDerivatives::~CPACSDampingDerivatives() {}
        
        void CPACSDampingDerivatives::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read attribute uID
            if (tixihelper::TixiCheckAttribute(tixiHandle, xpath, "uID")) {
                m_uID = tixihelper::TixiGetAttribute<std::string>(tixiHandle, xpath, "uID");
            }
            
            // read element dcfxdpstar
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/dcfxdpstar")) {
                m_dcfxdpstar = boost::in_place();
                try {
                    m_dcfxdpstar->ReadCPACS(tixiHandle, xpath + "/dcfxdpstar");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read dcfxdpstar at xpath << " << xpath << ": " << e.what();
                    m_dcfxdpstar = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read dcfxdpstar at xpath << " << xpath << ": " << e.getError();
                    m_dcfxdpstar = boost::none;
                }
            }
            
            // read element dcfxdqstar
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/dcfxdqstar")) {
                m_dcfxdqstar = boost::in_place();
                try {
                    m_dcfxdqstar->ReadCPACS(tixiHandle, xpath + "/dcfxdqstar");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read dcfxdqstar at xpath << " << xpath << ": " << e.what();
                    m_dcfxdqstar = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read dcfxdqstar at xpath << " << xpath << ": " << e.getError();
                    m_dcfxdqstar = boost::none;
                }
            }
            
            // read element dcfxdrstar
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/dcfxdrstar")) {
                m_dcfxdrstar = boost::in_place();
                try {
                    m_dcfxdrstar->ReadCPACS(tixiHandle, xpath + "/dcfxdrstar");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read dcfxdrstar at xpath << " << xpath << ": " << e.what();
                    m_dcfxdrstar = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read dcfxdrstar at xpath << " << xpath << ": " << e.getError();
                    m_dcfxdrstar = boost::none;
                }
            }
            
            // read element dcfydpstar
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/dcfydpstar")) {
                m_dcfydpstar = boost::in_place();
                try {
                    m_dcfydpstar->ReadCPACS(tixiHandle, xpath + "/dcfydpstar");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read dcfydpstar at xpath << " << xpath << ": " << e.what();
                    m_dcfydpstar = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read dcfydpstar at xpath << " << xpath << ": " << e.getError();
                    m_dcfydpstar = boost::none;
                }
            }
            
            // read element dcfydqstar
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/dcfydqstar")) {
                m_dcfydqstar = boost::in_place();
                try {
                    m_dcfydqstar->ReadCPACS(tixiHandle, xpath + "/dcfydqstar");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read dcfydqstar at xpath << " << xpath << ": " << e.what();
                    m_dcfydqstar = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read dcfydqstar at xpath << " << xpath << ": " << e.getError();
                    m_dcfydqstar = boost::none;
                }
            }
            
            // read element dcfydrstar
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/dcfydrstar")) {
                m_dcfydrstar = boost::in_place();
                try {
                    m_dcfydrstar->ReadCPACS(tixiHandle, xpath + "/dcfydrstar");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read dcfydrstar at xpath << " << xpath << ": " << e.what();
                    m_dcfydrstar = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read dcfydrstar at xpath << " << xpath << ": " << e.getError();
                    m_dcfydrstar = boost::none;
                }
            }
            
            // read element dcfzdpstar
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/dcfzdpstar")) {
                m_dcfzdpstar = boost::in_place();
                try {
                    m_dcfzdpstar->ReadCPACS(tixiHandle, xpath + "/dcfzdpstar");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read dcfzdpstar at xpath << " << xpath << ": " << e.what();
                    m_dcfzdpstar = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read dcfzdpstar at xpath << " << xpath << ": " << e.getError();
                    m_dcfzdpstar = boost::none;
                }
            }
            
            // read element dcfzdqstar
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/dcfzdqstar")) {
                m_dcfzdqstar = boost::in_place();
                try {
                    m_dcfzdqstar->ReadCPACS(tixiHandle, xpath + "/dcfzdqstar");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read dcfzdqstar at xpath << " << xpath << ": " << e.what();
                    m_dcfzdqstar = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read dcfzdqstar at xpath << " << xpath << ": " << e.getError();
                    m_dcfzdqstar = boost::none;
                }
            }
            
            // read element dcfzdrstar
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/dcfzdrstar")) {
                m_dcfzdrstar = boost::in_place();
                try {
                    m_dcfzdrstar->ReadCPACS(tixiHandle, xpath + "/dcfzdrstar");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read dcfzdrstar at xpath << " << xpath << ": " << e.what();
                    m_dcfzdrstar = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read dcfzdrstar at xpath << " << xpath << ": " << e.getError();
                    m_dcfzdrstar = boost::none;
                }
            }
            
            // read element dcmxdpstar
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/dcmxdpstar")) {
                m_dcmxdpstar = boost::in_place();
                try {
                    m_dcmxdpstar->ReadCPACS(tixiHandle, xpath + "/dcmxdpstar");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read dcmxdpstar at xpath << " << xpath << ": " << e.what();
                    m_dcmxdpstar = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read dcmxdpstar at xpath << " << xpath << ": " << e.getError();
                    m_dcmxdpstar = boost::none;
                }
            }
            
            // read element dcmxdqstar
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/dcmxdqstar")) {
                m_dcmxdqstar = boost::in_place();
                try {
                    m_dcmxdqstar->ReadCPACS(tixiHandle, xpath + "/dcmxdqstar");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read dcmxdqstar at xpath << " << xpath << ": " << e.what();
                    m_dcmxdqstar = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read dcmxdqstar at xpath << " << xpath << ": " << e.getError();
                    m_dcmxdqstar = boost::none;
                }
            }
            
            // read element dcmxdrstar
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/dcmxdrstar")) {
                m_dcmxdrstar = boost::in_place();
                try {
                    m_dcmxdrstar->ReadCPACS(tixiHandle, xpath + "/dcmxdrstar");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read dcmxdrstar at xpath << " << xpath << ": " << e.what();
                    m_dcmxdrstar = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read dcmxdrstar at xpath << " << xpath << ": " << e.getError();
                    m_dcmxdrstar = boost::none;
                }
            }
            
            // read element dcmydpstar
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/dcmydpstar")) {
                m_dcmydpstar = boost::in_place();
                try {
                    m_dcmydpstar->ReadCPACS(tixiHandle, xpath + "/dcmydpstar");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read dcmydpstar at xpath << " << xpath << ": " << e.what();
                    m_dcmydpstar = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read dcmydpstar at xpath << " << xpath << ": " << e.getError();
                    m_dcmydpstar = boost::none;
                }
            }
            
            // read element dcmydqstar
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/dcmydqstar")) {
                m_dcmydqstar = boost::in_place();
                try {
                    m_dcmydqstar->ReadCPACS(tixiHandle, xpath + "/dcmydqstar");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read dcmydqstar at xpath << " << xpath << ": " << e.what();
                    m_dcmydqstar = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read dcmydqstar at xpath << " << xpath << ": " << e.getError();
                    m_dcmydqstar = boost::none;
                }
            }
            
            // read element dcmydrstar
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/dcmydrstar")) {
                m_dcmydrstar = boost::in_place();
                try {
                    m_dcmydrstar->ReadCPACS(tixiHandle, xpath + "/dcmydrstar");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read dcmydrstar at xpath << " << xpath << ": " << e.what();
                    m_dcmydrstar = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read dcmydrstar at xpath << " << xpath << ": " << e.getError();
                    m_dcmydrstar = boost::none;
                }
            }
            
            // read element dcmzdpstar
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/dcmzdpstar")) {
                m_dcmzdpstar = boost::in_place();
                try {
                    m_dcmzdpstar->ReadCPACS(tixiHandle, xpath + "/dcmzdpstar");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read dcmzdpstar at xpath << " << xpath << ": " << e.what();
                    m_dcmzdpstar = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read dcmzdpstar at xpath << " << xpath << ": " << e.getError();
                    m_dcmzdpstar = boost::none;
                }
            }
            
            // read element dcmzdqstar
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/dcmzdqstar")) {
                m_dcmzdqstar = boost::in_place();
                try {
                    m_dcmzdqstar->ReadCPACS(tixiHandle, xpath + "/dcmzdqstar");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read dcmzdqstar at xpath << " << xpath << ": " << e.what();
                    m_dcmzdqstar = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read dcmzdqstar at xpath << " << xpath << ": " << e.getError();
                    m_dcmzdqstar = boost::none;
                }
            }
            
            // read element dcmzdrstar
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/dcmzdrstar")) {
                m_dcmzdrstar = boost::in_place();
                try {
                    m_dcmzdrstar->ReadCPACS(tixiHandle, xpath + "/dcmzdrstar");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read dcmzdrstar at xpath << " << xpath << ": " << e.what();
                    m_dcmzdrstar = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read dcmzdrstar at xpath << " << xpath << ": " << e.getError();
                    m_dcmzdrstar = boost::none;
                }
            }
            
        }
        
        void CPACSDampingDerivatives::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write attribute uID
            if (m_uID) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/uID");
                tixihelper::TixiSaveAttribute(tixiHandle, xpath, "uID", *m_uID);
            }
            
            // write element dcfxdpstar
            if (m_dcfxdpstar) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/dcfxdpstar");
                m_dcfxdpstar->WriteCPACS(tixiHandle, xpath + "/dcfxdpstar");
            }
            
            // write element dcfxdqstar
            if (m_dcfxdqstar) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/dcfxdqstar");
                m_dcfxdqstar->WriteCPACS(tixiHandle, xpath + "/dcfxdqstar");
            }
            
            // write element dcfxdrstar
            if (m_dcfxdrstar) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/dcfxdrstar");
                m_dcfxdrstar->WriteCPACS(tixiHandle, xpath + "/dcfxdrstar");
            }
            
            // write element dcfydpstar
            if (m_dcfydpstar) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/dcfydpstar");
                m_dcfydpstar->WriteCPACS(tixiHandle, xpath + "/dcfydpstar");
            }
            
            // write element dcfydqstar
            if (m_dcfydqstar) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/dcfydqstar");
                m_dcfydqstar->WriteCPACS(tixiHandle, xpath + "/dcfydqstar");
            }
            
            // write element dcfydrstar
            if (m_dcfydrstar) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/dcfydrstar");
                m_dcfydrstar->WriteCPACS(tixiHandle, xpath + "/dcfydrstar");
            }
            
            // write element dcfzdpstar
            if (m_dcfzdpstar) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/dcfzdpstar");
                m_dcfzdpstar->WriteCPACS(tixiHandle, xpath + "/dcfzdpstar");
            }
            
            // write element dcfzdqstar
            if (m_dcfzdqstar) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/dcfzdqstar");
                m_dcfzdqstar->WriteCPACS(tixiHandle, xpath + "/dcfzdqstar");
            }
            
            // write element dcfzdrstar
            if (m_dcfzdrstar) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/dcfzdrstar");
                m_dcfzdrstar->WriteCPACS(tixiHandle, xpath + "/dcfzdrstar");
            }
            
            // write element dcmxdpstar
            if (m_dcmxdpstar) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/dcmxdpstar");
                m_dcmxdpstar->WriteCPACS(tixiHandle, xpath + "/dcmxdpstar");
            }
            
            // write element dcmxdqstar
            if (m_dcmxdqstar) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/dcmxdqstar");
                m_dcmxdqstar->WriteCPACS(tixiHandle, xpath + "/dcmxdqstar");
            }
            
            // write element dcmxdrstar
            if (m_dcmxdrstar) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/dcmxdrstar");
                m_dcmxdrstar->WriteCPACS(tixiHandle, xpath + "/dcmxdrstar");
            }
            
            // write element dcmydpstar
            if (m_dcmydpstar) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/dcmydpstar");
                m_dcmydpstar->WriteCPACS(tixiHandle, xpath + "/dcmydpstar");
            }
            
            // write element dcmydqstar
            if (m_dcmydqstar) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/dcmydqstar");
                m_dcmydqstar->WriteCPACS(tixiHandle, xpath + "/dcmydqstar");
            }
            
            // write element dcmydrstar
            if (m_dcmydrstar) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/dcmydrstar");
                m_dcmydrstar->WriteCPACS(tixiHandle, xpath + "/dcmydrstar");
            }
            
            // write element dcmzdpstar
            if (m_dcmzdpstar) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/dcmzdpstar");
                m_dcmzdpstar->WriteCPACS(tixiHandle, xpath + "/dcmzdpstar");
            }
            
            // write element dcmzdqstar
            if (m_dcmzdqstar) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/dcmzdqstar");
                m_dcmzdqstar->WriteCPACS(tixiHandle, xpath + "/dcmzdqstar");
            }
            
            // write element dcmzdrstar
            if (m_dcmzdrstar) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/dcmzdrstar");
                m_dcmzdrstar->WriteCPACS(tixiHandle, xpath + "/dcmzdrstar");
            }
            
        }
        
        bool CPACSDampingDerivatives::HasUID() const
        {
            return static_cast<bool>(m_uID);
        }
        
        const std::string& CPACSDampingDerivatives::GetUID() const
        {
            return *m_uID;
        }
        
        void CPACSDampingDerivatives::SetUID(const std::string& value)
        {
            m_uID = value;
        }
        
        bool CPACSDampingDerivatives::HasDcfxdpstar() const
        {
            return static_cast<bool>(m_dcfxdpstar);
        }
        
        const CPACSStringArrayBase& CPACSDampingDerivatives::GetDcfxdpstar() const
        {
            return *m_dcfxdpstar;
        }
        
        CPACSStringArrayBase& CPACSDampingDerivatives::GetDcfxdpstar()
        {
            return *m_dcfxdpstar;
        }
        
        bool CPACSDampingDerivatives::HasDcfxdqstar() const
        {
            return static_cast<bool>(m_dcfxdqstar);
        }
        
        const CPACSStringArrayBase& CPACSDampingDerivatives::GetDcfxdqstar() const
        {
            return *m_dcfxdqstar;
        }
        
        CPACSStringArrayBase& CPACSDampingDerivatives::GetDcfxdqstar()
        {
            return *m_dcfxdqstar;
        }
        
        bool CPACSDampingDerivatives::HasDcfxdrstar() const
        {
            return static_cast<bool>(m_dcfxdrstar);
        }
        
        const CPACSStringArrayBase& CPACSDampingDerivatives::GetDcfxdrstar() const
        {
            return *m_dcfxdrstar;
        }
        
        CPACSStringArrayBase& CPACSDampingDerivatives::GetDcfxdrstar()
        {
            return *m_dcfxdrstar;
        }
        
        bool CPACSDampingDerivatives::HasDcfydpstar() const
        {
            return static_cast<bool>(m_dcfydpstar);
        }
        
        const CPACSStringArrayBase& CPACSDampingDerivatives::GetDcfydpstar() const
        {
            return *m_dcfydpstar;
        }
        
        CPACSStringArrayBase& CPACSDampingDerivatives::GetDcfydpstar()
        {
            return *m_dcfydpstar;
        }
        
        bool CPACSDampingDerivatives::HasDcfydqstar() const
        {
            return static_cast<bool>(m_dcfydqstar);
        }
        
        const CPACSStringArrayBase& CPACSDampingDerivatives::GetDcfydqstar() const
        {
            return *m_dcfydqstar;
        }
        
        CPACSStringArrayBase& CPACSDampingDerivatives::GetDcfydqstar()
        {
            return *m_dcfydqstar;
        }
        
        bool CPACSDampingDerivatives::HasDcfydrstar() const
        {
            return static_cast<bool>(m_dcfydrstar);
        }
        
        const CPACSStringArrayBase& CPACSDampingDerivatives::GetDcfydrstar() const
        {
            return *m_dcfydrstar;
        }
        
        CPACSStringArrayBase& CPACSDampingDerivatives::GetDcfydrstar()
        {
            return *m_dcfydrstar;
        }
        
        bool CPACSDampingDerivatives::HasDcfzdpstar() const
        {
            return static_cast<bool>(m_dcfzdpstar);
        }
        
        const CPACSStringArrayBase& CPACSDampingDerivatives::GetDcfzdpstar() const
        {
            return *m_dcfzdpstar;
        }
        
        CPACSStringArrayBase& CPACSDampingDerivatives::GetDcfzdpstar()
        {
            return *m_dcfzdpstar;
        }
        
        bool CPACSDampingDerivatives::HasDcfzdqstar() const
        {
            return static_cast<bool>(m_dcfzdqstar);
        }
        
        const CPACSStringArrayBase& CPACSDampingDerivatives::GetDcfzdqstar() const
        {
            return *m_dcfzdqstar;
        }
        
        CPACSStringArrayBase& CPACSDampingDerivatives::GetDcfzdqstar()
        {
            return *m_dcfzdqstar;
        }
        
        bool CPACSDampingDerivatives::HasDcfzdrstar() const
        {
            return static_cast<bool>(m_dcfzdrstar);
        }
        
        const CPACSStringArrayBase& CPACSDampingDerivatives::GetDcfzdrstar() const
        {
            return *m_dcfzdrstar;
        }
        
        CPACSStringArrayBase& CPACSDampingDerivatives::GetDcfzdrstar()
        {
            return *m_dcfzdrstar;
        }
        
        bool CPACSDampingDerivatives::HasDcmxdpstar() const
        {
            return static_cast<bool>(m_dcmxdpstar);
        }
        
        const CPACSStringArrayBase& CPACSDampingDerivatives::GetDcmxdpstar() const
        {
            return *m_dcmxdpstar;
        }
        
        CPACSStringArrayBase& CPACSDampingDerivatives::GetDcmxdpstar()
        {
            return *m_dcmxdpstar;
        }
        
        bool CPACSDampingDerivatives::HasDcmxdqstar() const
        {
            return static_cast<bool>(m_dcmxdqstar);
        }
        
        const CPACSStringArrayBase& CPACSDampingDerivatives::GetDcmxdqstar() const
        {
            return *m_dcmxdqstar;
        }
        
        CPACSStringArrayBase& CPACSDampingDerivatives::GetDcmxdqstar()
        {
            return *m_dcmxdqstar;
        }
        
        bool CPACSDampingDerivatives::HasDcmxdrstar() const
        {
            return static_cast<bool>(m_dcmxdrstar);
        }
        
        const CPACSStringArrayBase& CPACSDampingDerivatives::GetDcmxdrstar() const
        {
            return *m_dcmxdrstar;
        }
        
        CPACSStringArrayBase& CPACSDampingDerivatives::GetDcmxdrstar()
        {
            return *m_dcmxdrstar;
        }
        
        bool CPACSDampingDerivatives::HasDcmydpstar() const
        {
            return static_cast<bool>(m_dcmydpstar);
        }
        
        const CPACSStringArrayBase& CPACSDampingDerivatives::GetDcmydpstar() const
        {
            return *m_dcmydpstar;
        }
        
        CPACSStringArrayBase& CPACSDampingDerivatives::GetDcmydpstar()
        {
            return *m_dcmydpstar;
        }
        
        bool CPACSDampingDerivatives::HasDcmydqstar() const
        {
            return static_cast<bool>(m_dcmydqstar);
        }
        
        const CPACSStringArrayBase& CPACSDampingDerivatives::GetDcmydqstar() const
        {
            return *m_dcmydqstar;
        }
        
        CPACSStringArrayBase& CPACSDampingDerivatives::GetDcmydqstar()
        {
            return *m_dcmydqstar;
        }
        
        bool CPACSDampingDerivatives::HasDcmydrstar() const
        {
            return static_cast<bool>(m_dcmydrstar);
        }
        
        const CPACSStringArrayBase& CPACSDampingDerivatives::GetDcmydrstar() const
        {
            return *m_dcmydrstar;
        }
        
        CPACSStringArrayBase& CPACSDampingDerivatives::GetDcmydrstar()
        {
            return *m_dcmydrstar;
        }
        
        bool CPACSDampingDerivatives::HasDcmzdpstar() const
        {
            return static_cast<bool>(m_dcmzdpstar);
        }
        
        const CPACSStringArrayBase& CPACSDampingDerivatives::GetDcmzdpstar() const
        {
            return *m_dcmzdpstar;
        }
        
        CPACSStringArrayBase& CPACSDampingDerivatives::GetDcmzdpstar()
        {
            return *m_dcmzdpstar;
        }
        
        bool CPACSDampingDerivatives::HasDcmzdqstar() const
        {
            return static_cast<bool>(m_dcmzdqstar);
        }
        
        const CPACSStringArrayBase& CPACSDampingDerivatives::GetDcmzdqstar() const
        {
            return *m_dcmzdqstar;
        }
        
        CPACSStringArrayBase& CPACSDampingDerivatives::GetDcmzdqstar()
        {
            return *m_dcmzdqstar;
        }
        
        bool CPACSDampingDerivatives::HasDcmzdrstar() const
        {
            return static_cast<bool>(m_dcmzdrstar);
        }
        
        const CPACSStringArrayBase& CPACSDampingDerivatives::GetDcmzdrstar() const
        {
            return *m_dcmzdrstar;
        }
        
        CPACSStringArrayBase& CPACSDampingDerivatives::GetDcmzdrstar()
        {
            return *m_dcmzdrstar;
        }
        
    }
}
