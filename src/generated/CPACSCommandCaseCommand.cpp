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
#include "CPACSCommandCaseCommand.h"

namespace tigl
{
    namespace generated
    {
        CPACSCommandCaseCommand::CPACSCommandCaseCommand(){}
        CPACSCommandCaseCommand::~CPACSCommandCaseCommand() {}
        
        void CPACSCommandCaseCommand::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read element gain
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/gain")) {
                m_gain = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/gain");
            }
            else {
                LOG(ERROR) << "Required element gain is missing";
            }
            
            // read element controlDistributorUID
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/controlDistributorUID")) {
                m_controlDistributorUID_choice1 = tixihelper::TixiGetElement<std::string>(tixiHandle, xpath + "/controlDistributorUID");
            }
            
            // read element controlFunctionUID
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/controlFunctionUID")) {
                m_controlFunctionUID_choice2 = tixihelper::TixiGetElement<std::string>(tixiHandle, xpath + "/controlFunctionUID");
            }
            
        }
        
        void CPACSCommandCaseCommand::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write element gain
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/gain");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/gain", m_gain);
            
            // write element controlDistributorUID
            if (m_controlDistributorUID_choice1) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/controlDistributorUID");
                tixihelper::TixiSaveElement(tixiHandle, xpath + "/controlDistributorUID", *m_controlDistributorUID_choice1);
            }
            
            // write element controlFunctionUID
            if (m_controlFunctionUID_choice2) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/controlFunctionUID");
                tixihelper::TixiSaveElement(tixiHandle, xpath + "/controlFunctionUID", *m_controlFunctionUID_choice2);
            }
            
        }
        
        const double& CPACSCommandCaseCommand::GetGain() const
        {
            return m_gain;
        }
        
        void CPACSCommandCaseCommand::SetGain(const double& value)
        {
            m_gain = value;
        }
        
        bool CPACSCommandCaseCommand::HasControlDistributorUID_choice1() const
        {
            return static_cast<bool>(m_controlDistributorUID_choice1);
        }
        
        const std::string& CPACSCommandCaseCommand::GetControlDistributorUID_choice1() const
        {
            return *m_controlDistributorUID_choice1;
        }
        
        void CPACSCommandCaseCommand::SetControlDistributorUID_choice1(const std::string& value)
        {
            m_controlDistributorUID_choice1 = value;
        }
        
        bool CPACSCommandCaseCommand::HasControlFunctionUID_choice2() const
        {
            return static_cast<bool>(m_controlFunctionUID_choice2);
        }
        
        const std::string& CPACSCommandCaseCommand::GetControlFunctionUID_choice2() const
        {
            return *m_controlFunctionUID_choice2;
        }
        
        void CPACSCommandCaseCommand::SetControlFunctionUID_choice2(const std::string& value)
        {
            m_controlFunctionUID_choice2 = value;
        }
        
    }
}
