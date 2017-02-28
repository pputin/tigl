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

#include <CCPACSRotorHinge.h>
#include <cassert>
#include "CCPACSRotorBladeAttachment.h"
#include "TixiHelper.h"
#include "CTiglLogging.h"
#include "CTiglError.h"
#include "CPACSRotorHubHinges.h"

namespace tigl
{
    namespace generated
    {
        CPACSRotorHubHinges::CPACSRotorHubHinges(CCPACSRotorBladeAttachment* parent)
        {
            //assert(parent != nullptr);
            m_parent = parent;
        }
        
        CPACSRotorHubHinges::~CPACSRotorHubHinges() {}
        
        CCPACSRotorBladeAttachment* CPACSRotorHubHinges::GetParent() const
        {
            return m_parent;
        }
        
        void CPACSRotorHubHinges::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read element hinge
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/hinge")) {
                tixihelper::TixiReadElements(tixiHandle, xpath + "/hinge", m_hinge, reinterpret_cast<CCPACSRotorHinges*>(this));
            }
            
        }
        
        void CPACSRotorHubHinges::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write element hinge
            tixihelper::TixiSaveElements(tixiHandle, xpath + "/hinge", m_hinge);
            
        }
        
        const std::vector<unique_ptr<CCPACSRotorHinge>>& CPACSRotorHubHinges::GetHinge() const
        {
            return m_hinge;
        }
        
        std::vector<unique_ptr<CCPACSRotorHinge>>& CPACSRotorHubHinges::GetHinge()
        {
            return m_hinge;
        }
        
    }
}
