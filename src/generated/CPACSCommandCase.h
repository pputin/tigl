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
        class CPACSCommandCaseCommand;
        
        // This class is used in:
        // CPACSCommandCases
        
        // generated from /xsd:schema/xsd:complexType[136]
        class CPACSCommandCase
        {
        public:
            TIGL_EXPORT CPACSCommandCase();
            TIGL_EXPORT virtual ~CPACSCommandCase();
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT const std::string& GetUID() const;
            TIGL_EXPORT void SetUID(const std::string& value);
            
            TIGL_EXPORT bool HasName() const;
            TIGL_EXPORT const std::string& GetName() const;
            TIGL_EXPORT void SetName(const std::string& value);
            
            TIGL_EXPORT bool HasDescription() const;
            TIGL_EXPORT const std::string& GetDescription() const;
            TIGL_EXPORT void SetDescription(const std::string& value);
            
            TIGL_EXPORT const std::vector<unique_ptr<CPACSCommandCaseCommand>>& GetCommand() const;
            TIGL_EXPORT std::vector<unique_ptr<CPACSCommandCaseCommand>>& GetCommand();
            
        protected:
            std::string                                      m_uID;
            boost::optional<std::string>                     m_name;
            boost::optional<std::string>                     m_description;
            std::vector<unique_ptr<CPACSCommandCaseCommand>> m_command;
            
        private:
            #ifdef HAVE_CPP11
            CPACSCommandCase(const CPACSCommandCase&) = delete;
            CPACSCommandCase& operator=(const CPACSCommandCase&) = delete;
            
            CPACSCommandCase(CPACSCommandCase&&) = delete;
            CPACSCommandCase& operator=(CPACSCommandCase&&) = delete;
            #else
            CPACSCommandCase(const CPACSCommandCase&);
            CPACSCommandCase& operator=(const CPACSCommandCase&);
            #endif
        };
    }
    
    // This type is not customized, create alias in tigl namespace
    #ifdef CPP11
    using CCPACSCommandCase = generated::CPACSCommandCase;
    #else
    typedef generated::CPACSCommandCase CCPACSCommandCase;
    #endif
    
    using generated::CPACSCommandCaseCommand;
}
