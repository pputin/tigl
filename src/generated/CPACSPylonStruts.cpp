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
#include "CPACSPylonStruts.h"

namespace tigl
{
    namespace generated
    {
        CPACSPylonStruts::CPACSPylonStruts(){}
        CPACSPylonStruts::~CPACSPylonStruts() {}
        
        void CPACSPylonStruts::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read element dragStrut
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/dragStrut")) {
                m_dragStrut = boost::in_place();
                try {
                    m_dragStrut->ReadCPACS(tixiHandle, xpath + "/dragStrut");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read dragStrut at xpath << " << xpath << ": " << e.what();
                    m_dragStrut = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read dragStrut at xpath << " << xpath << ": " << e.getError();
                    m_dragStrut = boost::none;
                }
            }
            
            // read element upperLinks
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/upperLinks")) {
                m_upperLinks = boost::in_place();
                try {
                    m_upperLinks->ReadCPACS(tixiHandle, xpath + "/upperLinks");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read upperLinks at xpath << " << xpath << ": " << e.what();
                    m_upperLinks = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read upperLinks at xpath << " << xpath << ": " << e.getError();
                    m_upperLinks = boost::none;
                }
            }
            
            // read element tangentLinks
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/tangentLinks")) {
                m_tangentLinks = boost::in_place();
                try {
                    m_tangentLinks->ReadCPACS(tixiHandle, xpath + "/tangentLinks");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read tangentLinks at xpath << " << xpath << ": " << e.what();
                    m_tangentLinks = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read tangentLinks at xpath << " << xpath << ": " << e.getError();
                    m_tangentLinks = boost::none;
                }
            }
            
        }
        
        void CPACSPylonStruts::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write element dragStrut
            if (m_dragStrut) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/dragStrut");
                m_dragStrut->WriteCPACS(tixiHandle, xpath + "/dragStrut");
            }
            
            // write element upperLinks
            if (m_upperLinks) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/upperLinks");
                m_upperLinks->WriteCPACS(tixiHandle, xpath + "/upperLinks");
            }
            
            // write element tangentLinks
            if (m_tangentLinks) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/tangentLinks");
                m_tangentLinks->WriteCPACS(tixiHandle, xpath + "/tangentLinks");
            }
            
        }
        
        bool CPACSPylonStruts::HasDragStrut() const
        {
            return static_cast<bool>(m_dragStrut);
        }
        
        const CPACSStrut& CPACSPylonStruts::GetDragStrut() const
        {
            return *m_dragStrut;
        }
        
        CPACSStrut& CPACSPylonStruts::GetDragStrut()
        {
            return *m_dragStrut;
        }
        
        bool CPACSPylonStruts::HasUpperLinks() const
        {
            return static_cast<bool>(m_upperLinks);
        }
        
        const CPACSUpperLinks& CPACSPylonStruts::GetUpperLinks() const
        {
            return *m_upperLinks;
        }
        
        CPACSUpperLinks& CPACSPylonStruts::GetUpperLinks()
        {
            return *m_upperLinks;
        }
        
        bool CPACSPylonStruts::HasTangentLinks() const
        {
            return static_cast<bool>(m_tangentLinks);
        }
        
        const CPACSTangentLinks& CPACSPylonStruts::GetTangentLinks() const
        {
            return *m_tangentLinks;
        }
        
        CPACSTangentLinks& CPACSPylonStruts::GetTangentLinks()
        {
            return *m_tangentLinks;
        }
        
    }
}
