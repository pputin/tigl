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
#include <boost/optional.hpp>
#include "tigl_internal.h"

namespace tigl
{
    namespace generated
    {
        class CPACSWingInterfaceSupportStrut;
        
        // This class is used in:
        // CPACSWingInterfaceDefinitions
        
        // generated from /xsd:schema/xsd:complexType[908]
        class CPACSWingInterfaceSupportStrutsAssembly
        {
        public:
            TIGL_EXPORT CPACSWingInterfaceSupportStrutsAssembly();
            TIGL_EXPORT virtual ~CPACSWingInterfaceSupportStrutsAssembly();
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT bool HasUID() const;
            TIGL_EXPORT const std::string& GetUID() const;
            TIGL_EXPORT void SetUID(const std::string& value);
            
            TIGL_EXPORT const std::vector<unique_ptr<CPACSWingInterfaceSupportStrut>>& GetWingInterfaceSupportStrut() const;
            TIGL_EXPORT std::vector<unique_ptr<CPACSWingInterfaceSupportStrut>>& GetWingInterfaceSupportStrut();
            
        protected:
            boost::optional<std::string>                            m_uID;
            std::vector<unique_ptr<CPACSWingInterfaceSupportStrut>> m_wingInterfaceSupportStrut;
            
        private:
            #ifdef HAVE_CPP11
            CPACSWingInterfaceSupportStrutsAssembly(const CPACSWingInterfaceSupportStrutsAssembly&) = delete;
            CPACSWingInterfaceSupportStrutsAssembly& operator=(const CPACSWingInterfaceSupportStrutsAssembly&) = delete;
            
            CPACSWingInterfaceSupportStrutsAssembly(CPACSWingInterfaceSupportStrutsAssembly&&) = delete;
            CPACSWingInterfaceSupportStrutsAssembly& operator=(CPACSWingInterfaceSupportStrutsAssembly&&) = delete;
            #else
            CPACSWingInterfaceSupportStrutsAssembly(const CPACSWingInterfaceSupportStrutsAssembly&);
            CPACSWingInterfaceSupportStrutsAssembly& operator=(const CPACSWingInterfaceSupportStrutsAssembly&);
            #endif
        };
    }
    
    // This type is not customized, create alias in tigl namespace
    #ifdef CPP11
    using CCPACSWingInterfaceSupportStrutsAssembly = generated::CPACSWingInterfaceSupportStrutsAssembly;
    #else
    typedef generated::CPACSWingInterfaceSupportStrutsAssembly CCPACSWingInterfaceSupportStrutsAssembly;
    #endif
    
    using generated::CPACSWingInterfaceSupportStrut;
}
