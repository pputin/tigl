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

#include "CPACSWingWingAttachmentSpars.h"
#include "TixiHelper.h"
#include "CTiglLogging.h"
#include "CTiglError.h"
#include "CPACSWingWingAttachmentsSpars.h"

namespace tigl
{
    namespace generated
    {
        CPACSWingWingAttachmentsSpars::CPACSWingWingAttachmentsSpars(){}
        CPACSWingWingAttachmentsSpars::~CPACSWingWingAttachmentsSpars() {}
        
        void CPACSWingWingAttachmentsSpars::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read element sparAttachment
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/sparAttachment")) {
                tixihelper::TixiReadElements(tixiHandle, xpath + "/sparAttachment", m_sparAttachment);
            }
            
        }
        
        void CPACSWingWingAttachmentsSpars::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write element sparAttachment
            tixihelper::TixiSaveElements(tixiHandle, xpath + "/sparAttachment", m_sparAttachment);
            
        }
        
        const std::vector<unique_ptr<CPACSWingWingAttachmentSpars>>& CPACSWingWingAttachmentsSpars::GetSparAttachment() const
        {
            return m_sparAttachment;
        }
        
        std::vector<unique_ptr<CPACSWingWingAttachmentSpars>>& CPACSWingWingAttachmentsSpars::GetSparAttachment()
        {
            return m_sparAttachment;
        }
        
    }
}
