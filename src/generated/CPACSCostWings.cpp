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

#include "CPACSGenericCost.h"
#include "TixiHelper.h"
#include "CTiglLogging.h"
#include "CTiglError.h"
#include "CPACSCostWings.h"

namespace tigl
{
    namespace generated
    {
        CPACSCostWings::CPACSCostWings(){}
        CPACSCostWings::~CPACSCostWings() {}
        
        void CPACSCostWings::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read element costDescription
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/costDescription")) {
                m_costDescription.ReadCPACS(tixiHandle, xpath + "/costDescription");
            }
            else {
                LOG(ERROR) << "Required element costDescription is missing";
            }
            
            // read element wing
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/wing")) {
                tixihelper::TixiReadElements(tixiHandle, xpath + "/wing", m_wing);
            }
            
        }
        
        void CPACSCostWings::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write element costDescription
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/costDescription");
            m_costDescription.WriteCPACS(tixiHandle, xpath + "/costDescription");
            
            // write element wing
            tixihelper::TixiSaveElements(tixiHandle, xpath + "/wing", m_wing);
            
        }
        
        const CPACSGenericCost& CPACSCostWings::GetCostDescription() const
        {
            return m_costDescription;
        }
        
        CPACSGenericCost& CPACSCostWings::GetCostDescription()
        {
            return m_costDescription;
        }
        
        const std::vector<unique_ptr<CPACSGenericCost>>& CPACSCostWings::GetWing() const
        {
            return m_wing;
        }
        
        std::vector<unique_ptr<CPACSGenericCost>>& CPACSCostWings::GetWing()
        {
            return m_wing;
        }
        
    }
}
