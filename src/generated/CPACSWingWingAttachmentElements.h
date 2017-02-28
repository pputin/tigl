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

#pragma once

#include <tixi.h>
#include <string>
#include "tigl_internal.h"

namespace tigl
{
    namespace generated
    {
        // This class is used in:
        // CPACSWingWingAttachment
        
        // generated from /xsd:schema/xsd:complexType[930]
        class CPACSWingWingAttachmentElements
        {
        public:
            TIGL_EXPORT CPACSWingWingAttachmentElements();
            TIGL_EXPORT virtual ~CPACSWingWingAttachmentElements();
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT const std::string& GetFromElementUID() const;
            TIGL_EXPORT void SetFromElementUID(const std::string& value);
            
            TIGL_EXPORT const std::string& GetToElementUID() const;
            TIGL_EXPORT void SetToElementUID(const std::string& value);
            
        protected:
            std::string m_fromElementUID;
            std::string m_toElementUID;
            
        private:
            #ifdef HAVE_CPP11
            CPACSWingWingAttachmentElements(const CPACSWingWingAttachmentElements&) = delete;
            CPACSWingWingAttachmentElements& operator=(const CPACSWingWingAttachmentElements&) = delete;
            
            CPACSWingWingAttachmentElements(CPACSWingWingAttachmentElements&&) = delete;
            CPACSWingWingAttachmentElements& operator=(CPACSWingWingAttachmentElements&&) = delete;
            #else
            CPACSWingWingAttachmentElements(const CPACSWingWingAttachmentElements&);
            CPACSWingWingAttachmentElements& operator=(const CPACSWingWingAttachmentElements&);
            #endif
        };
    }
    
    // This type is not customized, create alias in tigl namespace
    #ifdef CPP11
    using CCPACSWingWingAttachmentElements = generated::CPACSWingWingAttachmentElements;
    #else
    typedef generated::CPACSWingWingAttachmentElements CCPACSWingWingAttachmentElements;
    #endif
}
