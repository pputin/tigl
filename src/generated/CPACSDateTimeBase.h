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
#include <boost/optional.hpp>
#include "tigl_internal.h"

namespace tigl
{
    namespace generated
    {
        // This class is used in:
        // CPACSAirportFeesTool
        // CPACSAirportFlightplanSlot
        // CPACSHeader
        // CPACSUpdate
        
        // generated from /xsd:schema/xsd:complexType[250]
        class CPACSDateTimeBase
        {
        public:
            TIGL_EXPORT CPACSDateTimeBase();
            TIGL_EXPORT virtual ~CPACSDateTimeBase();
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT bool HasExternalDataNodePath() const;
            TIGL_EXPORT const std::string& GetExternalDataNodePath() const;
            TIGL_EXPORT void SetExternalDataNodePath(const std::string& value);
            
            TIGL_EXPORT bool HasExternalFileName() const;
            TIGL_EXPORT const std::string& GetExternalFileName() const;
            TIGL_EXPORT void SetExternalFileName(const std::string& value);
            
            TIGL_EXPORT bool HasExternalDataDirectory() const;
            TIGL_EXPORT const std::string& GetExternalDataDirectory() const;
            TIGL_EXPORT void SetExternalDataDirectory(const std::string& value);
            
            TIGL_EXPORT const time_t& GetSimpleContent() const;
            TIGL_EXPORT void SetSimpleContent(const time_t& value);
            
        protected:
            boost::optional<std::string> m_externalDataNodePath;
            boost::optional<std::string> m_externalFileName;
            boost::optional<std::string> m_externalDataDirectory;
            time_t                       m_simpleContent;
            
        private:
            #ifdef HAVE_CPP11
            CPACSDateTimeBase(const CPACSDateTimeBase&) = delete;
            CPACSDateTimeBase& operator=(const CPACSDateTimeBase&) = delete;
            
            CPACSDateTimeBase(CPACSDateTimeBase&&) = delete;
            CPACSDateTimeBase& operator=(CPACSDateTimeBase&&) = delete;
            #else
            CPACSDateTimeBase(const CPACSDateTimeBase&);
            CPACSDateTimeBase& operator=(const CPACSDateTimeBase&);
            #endif
        };
    }
    
    // This type is not customized, create alias in tigl namespace
    #ifdef CPP11
    using CCPACSDateTimeBase = generated::CPACSDateTimeBase;
    #else
    typedef generated::CPACSDateTimeBase CCPACSDateTimeBase;
    #endif
}
