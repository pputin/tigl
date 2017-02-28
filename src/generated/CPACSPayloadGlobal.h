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
#include "CPACSRequirement.h"
#include "CPACSRequirement.h"

namespace tigl
{
    namespace generated
    {
        // This class is used in:
        // CPACSAircraftGlobal
        
        // generated from /xsd:schema/xsd:complexType[677]
        class CPACSPayloadGlobal
        {
        public:
            TIGL_EXPORT CPACSPayloadGlobal();
            TIGL_EXPORT virtual ~CPACSPayloadGlobal();
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT bool HasPaxSeats() const;
            TIGL_EXPORT const CPACSRequirement& GetPaxSeats() const;
            TIGL_EXPORT CPACSRequirement& GetPaxSeats();
            
            TIGL_EXPORT bool HasCargoCapacity() const;
            TIGL_EXPORT const CPACSRequirement& GetCargoCapacity() const;
            TIGL_EXPORT CPACSRequirement& GetCargoCapacity();
            
        protected:
            boost::optional<CPACSRequirement> m_paxSeats;
            boost::optional<CPACSRequirement> m_cargoCapacity;
            
        private:
            #ifdef HAVE_CPP11
            CPACSPayloadGlobal(const CPACSPayloadGlobal&) = delete;
            CPACSPayloadGlobal& operator=(const CPACSPayloadGlobal&) = delete;
            
            CPACSPayloadGlobal(CPACSPayloadGlobal&&) = delete;
            CPACSPayloadGlobal& operator=(CPACSPayloadGlobal&&) = delete;
            #else
            CPACSPayloadGlobal(const CPACSPayloadGlobal&);
            CPACSPayloadGlobal& operator=(const CPACSPayloadGlobal&);
            #endif
        };
    }
    
    // This type is not customized, create alias in tigl namespace
    #ifdef CPP11
    using CCPACSPayloadGlobal = generated::CPACSPayloadGlobal;
    #else
    typedef generated::CPACSPayloadGlobal CCPACSPayloadGlobal;
    #endif
}
