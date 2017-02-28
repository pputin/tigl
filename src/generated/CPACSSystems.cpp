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
#include "CPACSSystems.h"

namespace tigl
{
    namespace generated
    {
        CPACSSystems::CPACSSystems(){}
        CPACSSystems::~CPACSSystems() {}
        
        void CPACSSystems::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read element cockpitControls
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/cockpitControls")) {
                m_cockpitControls.ReadCPACS(tixiHandle, xpath + "/cockpitControls");
            }
            else {
                LOG(ERROR) << "Required element cockpitControls is missing";
            }
            
            // read element commandCases
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/commandCases")) {
                m_commandCases.ReadCPACS(tixiHandle, xpath + "/commandCases");
            }
            else {
                LOG(ERROR) << "Required element commandCases is missing";
            }
            
            // read element controlDistributors
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/controlDistributors")) {
                m_controlDistributors.ReadCPACS(tixiHandle, xpath + "/controlDistributors");
            }
            else {
                LOG(ERROR) << "Required element controlDistributors is missing";
            }
            
            // read element controlLaws
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/controlLaws")) {
                m_controlLaws.ReadCPACS(tixiHandle, xpath + "/controlLaws");
            }
            else {
                LOG(ERROR) << "Required element controlLaws is missing";
            }
            
        }
        
        void CPACSSystems::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write element cockpitControls
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/cockpitControls");
            m_cockpitControls.WriteCPACS(tixiHandle, xpath + "/cockpitControls");
            
            // write element commandCases
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/commandCases");
            m_commandCases.WriteCPACS(tixiHandle, xpath + "/commandCases");
            
            // write element controlDistributors
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/controlDistributors");
            m_controlDistributors.WriteCPACS(tixiHandle, xpath + "/controlDistributors");
            
            // write element controlLaws
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/controlLaws");
            m_controlLaws.WriteCPACS(tixiHandle, xpath + "/controlLaws");
            
        }
        
        const CPACSCockpitControls& CPACSSystems::GetCockpitControls() const
        {
            return m_cockpitControls;
        }
        
        CPACSCockpitControls& CPACSSystems::GetCockpitControls()
        {
            return m_cockpitControls;
        }
        
        const CPACSCommandCases& CPACSSystems::GetCommandCases() const
        {
            return m_commandCases;
        }
        
        CPACSCommandCases& CPACSSystems::GetCommandCases()
        {
            return m_commandCases;
        }
        
        const CPACSControlDistributors& CPACSSystems::GetControlDistributors() const
        {
            return m_controlDistributors;
        }
        
        CPACSControlDistributors& CPACSSystems::GetControlDistributors()
        {
            return m_controlDistributors;
        }
        
        const CPACSControlLaws& CPACSSystems::GetControlLaws() const
        {
            return m_controlLaws;
        }
        
        CPACSControlLaws& CPACSSystems::GetControlLaws()
        {
            return m_controlLaws;
        }
        
    }
}
