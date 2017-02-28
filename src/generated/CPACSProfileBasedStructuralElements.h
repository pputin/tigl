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
#include <vector>
#include "UniquePtr.h"
#include "tigl_internal.h"

namespace tigl
{
    namespace generated
    {
        class CPACSProfileBasedStructuralElement;
        
        // This class is used in:
        // CPACSStructuralElements
        
        // generated from /xsd:schema/xsd:complexType[706]
        class CPACSProfileBasedStructuralElements
        {
        public:
            TIGL_EXPORT CPACSProfileBasedStructuralElements();
            TIGL_EXPORT virtual ~CPACSProfileBasedStructuralElements();
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT const std::vector<unique_ptr<CPACSProfileBasedStructuralElement>>& GetProfileBasedStructuralElement() const;
            TIGL_EXPORT std::vector<unique_ptr<CPACSProfileBasedStructuralElement>>& GetProfileBasedStructuralElement();
            
        protected:
            std::vector<unique_ptr<CPACSProfileBasedStructuralElement>> m_profileBasedStructuralElement;
            
        private:
            #ifdef HAVE_CPP11
            CPACSProfileBasedStructuralElements(const CPACSProfileBasedStructuralElements&) = delete;
            CPACSProfileBasedStructuralElements& operator=(const CPACSProfileBasedStructuralElements&) = delete;
            
            CPACSProfileBasedStructuralElements(CPACSProfileBasedStructuralElements&&) = delete;
            CPACSProfileBasedStructuralElements& operator=(CPACSProfileBasedStructuralElements&&) = delete;
            #else
            CPACSProfileBasedStructuralElements(const CPACSProfileBasedStructuralElements&);
            CPACSProfileBasedStructuralElements& operator=(const CPACSProfileBasedStructuralElements&);
            #endif
        };
    }
    
    // This type is not customized, create alias in tigl namespace
    #ifdef CPP11
    using CCPACSProfileBasedStructuralElements = generated::CPACSProfileBasedStructuralElements;
    #else
    typedef generated::CPACSProfileBasedStructuralElements CCPACSProfileBasedStructuralElements;
    #endif
    
    using generated::CPACSProfileBasedStructuralElement;
}
