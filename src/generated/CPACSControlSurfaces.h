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
#include "CPACSLeadingEdgeDevices.h"
#include "CPACSTrailingEdgeDevices.h"
#include "CPACSSpoilers.h"

namespace tigl
{
    namespace generated
    {
        // This class is used in:
        // CPACSComponentSegment
        
        // generated from /xsd:schema/xsd:complexType[193]
        class CPACSControlSurfaces
        {
        public:
            TIGL_EXPORT CPACSControlSurfaces();
            TIGL_EXPORT virtual ~CPACSControlSurfaces();
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT bool HasLeadingEdgeDevices() const;
            TIGL_EXPORT const CPACSLeadingEdgeDevices& GetLeadingEdgeDevices() const;
            TIGL_EXPORT CPACSLeadingEdgeDevices& GetLeadingEdgeDevices();
            
            TIGL_EXPORT bool HasTrailingEdgeDevices() const;
            TIGL_EXPORT const CPACSTrailingEdgeDevices& GetTrailingEdgeDevices() const;
            TIGL_EXPORT CPACSTrailingEdgeDevices& GetTrailingEdgeDevices();
            
            TIGL_EXPORT bool HasSpoilers() const;
            TIGL_EXPORT const CPACSSpoilers& GetSpoilers() const;
            TIGL_EXPORT CPACSSpoilers& GetSpoilers();
            
        protected:
            boost::optional<CPACSLeadingEdgeDevices>  m_leadingEdgeDevices;
            boost::optional<CPACSTrailingEdgeDevices> m_trailingEdgeDevices;
            boost::optional<CPACSSpoilers>            m_spoilers;
            
        private:
            #ifdef HAVE_CPP11
            CPACSControlSurfaces(const CPACSControlSurfaces&) = delete;
            CPACSControlSurfaces& operator=(const CPACSControlSurfaces&) = delete;
            
            CPACSControlSurfaces(CPACSControlSurfaces&&) = delete;
            CPACSControlSurfaces& operator=(CPACSControlSurfaces&&) = delete;
            #else
            CPACSControlSurfaces(const CPACSControlSurfaces&);
            CPACSControlSurfaces& operator=(const CPACSControlSurfaces&);
            #endif
        };
    }
    
    // This type is not customized, create alias in tigl namespace
    #ifdef CPP11
    using CCPACSControlSurfaces = generated::CPACSControlSurfaces;
    #else
    typedef generated::CPACSControlSurfaces CCPACSControlSurfaces;
    #endif
}
