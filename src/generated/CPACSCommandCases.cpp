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

#include "CPACSCommandCase.h"
#include "TixiHelper.h"
#include "CTiglLogging.h"
#include "CTiglError.h"
#include "CPACSCommandCases.h"

namespace tigl
{
    namespace generated
    {
        CPACSCommandCases::CPACSCommandCases(){}
        CPACSCommandCases::~CPACSCommandCases() {}
        
        void CPACSCommandCases::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read element dp
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/dp")) {
                m_dp.ReadCPACS(tixiHandle, xpath + "/dp");
            }
            else {
                LOG(ERROR) << "Required element dp is missing";
            }
            
            // read element dq
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/dq")) {
                m_dq.ReadCPACS(tixiHandle, xpath + "/dq");
            }
            else {
                LOG(ERROR) << "Required element dq is missing";
            }
            
            // read element dr
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/dr")) {
                m_dr.ReadCPACS(tixiHandle, xpath + "/dr");
            }
            else {
                LOG(ERROR) << "Required element dr is missing";
            }
            
            // read element dx
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/dx")) {
                m_dx = boost::in_place();
                try {
                    m_dx->ReadCPACS(tixiHandle, xpath + "/dx");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read dx at xpath << " << xpath << ": " << e.what();
                    m_dx = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read dx at xpath << " << xpath << ": " << e.getError();
                    m_dx = boost::none;
                }
            }
            
            // read element dy
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/dy")) {
                m_dy = boost::in_place();
                try {
                    m_dy->ReadCPACS(tixiHandle, xpath + "/dy");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read dy at xpath << " << xpath << ": " << e.what();
                    m_dy = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read dy at xpath << " << xpath << ": " << e.getError();
                    m_dy = boost::none;
                }
            }
            
            // read element dz
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/dz")) {
                m_dz = boost::in_place();
                try {
                    m_dz->ReadCPACS(tixiHandle, xpath + "/dz");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read dz at xpath << " << xpath << ": " << e.what();
                    m_dz = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read dz at xpath << " << xpath << ": " << e.getError();
                    m_dz = boost::none;
                }
            }
            
            // read element commandCase
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/commandCase")) {
                tixihelper::TixiReadElements(tixiHandle, xpath + "/commandCase", m_commandCase);
            }
            
        }
        
        void CPACSCommandCases::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write element dp
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/dp");
            m_dp.WriteCPACS(tixiHandle, xpath + "/dp");
            
            // write element dq
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/dq");
            m_dq.WriteCPACS(tixiHandle, xpath + "/dq");
            
            // write element dr
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/dr");
            m_dr.WriteCPACS(tixiHandle, xpath + "/dr");
            
            // write element dx
            if (m_dx) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/dx");
                m_dx->WriteCPACS(tixiHandle, xpath + "/dx");
            }
            
            // write element dy
            if (m_dy) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/dy");
                m_dy->WriteCPACS(tixiHandle, xpath + "/dy");
            }
            
            // write element dz
            if (m_dz) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/dz");
                m_dz->WriteCPACS(tixiHandle, xpath + "/dz");
            }
            
            // write element commandCase
            tixihelper::TixiSaveElements(tixiHandle, xpath + "/commandCase", m_commandCase);
            
        }
        
        const CPACSCommandCase& CPACSCommandCases::GetDp() const
        {
            return m_dp;
        }
        
        CPACSCommandCase& CPACSCommandCases::GetDp()
        {
            return m_dp;
        }
        
        const CPACSCommandCase& CPACSCommandCases::GetDq() const
        {
            return m_dq;
        }
        
        CPACSCommandCase& CPACSCommandCases::GetDq()
        {
            return m_dq;
        }
        
        const CPACSCommandCase& CPACSCommandCases::GetDr() const
        {
            return m_dr;
        }
        
        CPACSCommandCase& CPACSCommandCases::GetDr()
        {
            return m_dr;
        }
        
        bool CPACSCommandCases::HasDx() const
        {
            return static_cast<bool>(m_dx);
        }
        
        const CPACSCommandCase& CPACSCommandCases::GetDx() const
        {
            return *m_dx;
        }
        
        CPACSCommandCase& CPACSCommandCases::GetDx()
        {
            return *m_dx;
        }
        
        bool CPACSCommandCases::HasDy() const
        {
            return static_cast<bool>(m_dy);
        }
        
        const CPACSCommandCase& CPACSCommandCases::GetDy() const
        {
            return *m_dy;
        }
        
        CPACSCommandCase& CPACSCommandCases::GetDy()
        {
            return *m_dy;
        }
        
        bool CPACSCommandCases::HasDz() const
        {
            return static_cast<bool>(m_dz);
        }
        
        const CPACSCommandCase& CPACSCommandCases::GetDz() const
        {
            return *m_dz;
        }
        
        CPACSCommandCase& CPACSCommandCases::GetDz()
        {
            return *m_dz;
        }
        
        const std::vector<unique_ptr<CPACSCommandCase>>& CPACSCommandCases::GetCommandCase() const
        {
            return m_commandCase;
        }
        
        std::vector<unique_ptr<CPACSCommandCase>>& CPACSCommandCases::GetCommandCase()
        {
            return m_commandCase;
        }
        
    }
}
