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
#include "CPACSLoadCaseRotationVelocity.h"

namespace tigl
{
    namespace generated
    {
        CPACSLoadCaseRotationVelocity::CPACSLoadCaseRotationVelocity(){}
        CPACSLoadCaseRotationVelocity::~CPACSLoadCaseRotationVelocity() {}
        
        void CPACSLoadCaseRotationVelocity::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read element p
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/p")) {
                m_p_choice1 = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/p");
            }
            
            // read element q
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/q")) {
                m_q_choice1 = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/q");
            }
            
            // read element r
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/r")) {
                m_r_choice1 = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/r");
            }
            
            // read element phiDot
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/phiDot")) {
                m_phiDot_choice2 = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/phiDot");
            }
            
            // read element thetaDot
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/thetaDot")) {
                m_thetaDot_choice2 = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/thetaDot");
            }
            
            // read element psiDot
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/psiDot")) {
                m_psiDot_choice2 = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/psiDot");
            }
            
        }
        
        void CPACSLoadCaseRotationVelocity::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write element p
            if (m_p_choice1) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/p");
                tixihelper::TixiSaveElement(tixiHandle, xpath + "/p", *m_p_choice1);
            }
            
            // write element q
            if (m_q_choice1) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/q");
                tixihelper::TixiSaveElement(tixiHandle, xpath + "/q", *m_q_choice1);
            }
            
            // write element r
            if (m_r_choice1) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/r");
                tixihelper::TixiSaveElement(tixiHandle, xpath + "/r", *m_r_choice1);
            }
            
            // write element phiDot
            if (m_phiDot_choice2) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/phiDot");
                tixihelper::TixiSaveElement(tixiHandle, xpath + "/phiDot", *m_phiDot_choice2);
            }
            
            // write element thetaDot
            if (m_thetaDot_choice2) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/thetaDot");
                tixihelper::TixiSaveElement(tixiHandle, xpath + "/thetaDot", *m_thetaDot_choice2);
            }
            
            // write element psiDot
            if (m_psiDot_choice2) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/psiDot");
                tixihelper::TixiSaveElement(tixiHandle, xpath + "/psiDot", *m_psiDot_choice2);
            }
            
        }
        
        bool CPACSLoadCaseRotationVelocity::HasP_choice1() const
        {
            return static_cast<bool>(m_p_choice1);
        }
        
        const double& CPACSLoadCaseRotationVelocity::GetP_choice1() const
        {
            return *m_p_choice1;
        }
        
        void CPACSLoadCaseRotationVelocity::SetP_choice1(const double& value)
        {
            m_p_choice1 = value;
        }
        
        bool CPACSLoadCaseRotationVelocity::HasQ_choice1() const
        {
            return static_cast<bool>(m_q_choice1);
        }
        
        const double& CPACSLoadCaseRotationVelocity::GetQ_choice1() const
        {
            return *m_q_choice1;
        }
        
        void CPACSLoadCaseRotationVelocity::SetQ_choice1(const double& value)
        {
            m_q_choice1 = value;
        }
        
        bool CPACSLoadCaseRotationVelocity::HasR_choice1() const
        {
            return static_cast<bool>(m_r_choice1);
        }
        
        const double& CPACSLoadCaseRotationVelocity::GetR_choice1() const
        {
            return *m_r_choice1;
        }
        
        void CPACSLoadCaseRotationVelocity::SetR_choice1(const double& value)
        {
            m_r_choice1 = value;
        }
        
        bool CPACSLoadCaseRotationVelocity::HasPhiDot_choice2() const
        {
            return static_cast<bool>(m_phiDot_choice2);
        }
        
        const double& CPACSLoadCaseRotationVelocity::GetPhiDot_choice2() const
        {
            return *m_phiDot_choice2;
        }
        
        void CPACSLoadCaseRotationVelocity::SetPhiDot_choice2(const double& value)
        {
            m_phiDot_choice2 = value;
        }
        
        bool CPACSLoadCaseRotationVelocity::HasThetaDot_choice2() const
        {
            return static_cast<bool>(m_thetaDot_choice2);
        }
        
        const double& CPACSLoadCaseRotationVelocity::GetThetaDot_choice2() const
        {
            return *m_thetaDot_choice2;
        }
        
        void CPACSLoadCaseRotationVelocity::SetThetaDot_choice2(const double& value)
        {
            m_thetaDot_choice2 = value;
        }
        
        bool CPACSLoadCaseRotationVelocity::HasPsiDot_choice2() const
        {
            return static_cast<bool>(m_psiDot_choice2);
        }
        
        const double& CPACSLoadCaseRotationVelocity::GetPsiDot_choice2() const
        {
            return *m_psiDot_choice2;
        }
        
        void CPACSLoadCaseRotationVelocity::SetPsiDot_choice2(const double& value)
        {
            m_psiDot_choice2 = value;
        }
        
    }
}
