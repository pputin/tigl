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
#include "CPACSAlignmentCrossBeam.h"

namespace tigl
{
    namespace generated
    {
        // This class is used in:
        // CPACSCargoCrossBeamsAssembly
        // CPACSPaxCrossBeamsAssembly
        
        // generated from /xsd:schema/xsd:complexType[233]
        class CPACSCrossBeamAssemblyPosition
        {
        public:
            TIGL_EXPORT CPACSCrossBeamAssemblyPosition();
            TIGL_EXPORT virtual ~CPACSCrossBeamAssemblyPosition();
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT bool HasUID() const;
            TIGL_EXPORT const std::string& GetUID() const;
            TIGL_EXPORT void SetUID(const std::string& value);
            
            TIGL_EXPORT const std::string& GetStructuralElementUID() const;
            TIGL_EXPORT void SetStructuralElementUID(const std::string& value);
            
            TIGL_EXPORT const std::string& GetFrameUID() const;
            TIGL_EXPORT void SetFrameUID(const std::string& value);
            
            TIGL_EXPORT const double& GetPositionZ() const;
            TIGL_EXPORT void SetPositionZ(const double& value);
            
            TIGL_EXPORT bool HasAlignment() const;
            TIGL_EXPORT const CPACSAlignmentCrossBeam& GetAlignment() const;
            TIGL_EXPORT CPACSAlignmentCrossBeam& GetAlignment();
            
        protected:
            boost::optional<std::string>             m_uID;
            std::string                              m_structuralElementUID;
            std::string                              m_frameUID;
            double                                   m_positionZ;
            boost::optional<CPACSAlignmentCrossBeam> m_alignment;
            
        private:
            #ifdef HAVE_CPP11
            CPACSCrossBeamAssemblyPosition(const CPACSCrossBeamAssemblyPosition&) = delete;
            CPACSCrossBeamAssemblyPosition& operator=(const CPACSCrossBeamAssemblyPosition&) = delete;
            
            CPACSCrossBeamAssemblyPosition(CPACSCrossBeamAssemblyPosition&&) = delete;
            CPACSCrossBeamAssemblyPosition& operator=(CPACSCrossBeamAssemblyPosition&&) = delete;
            #else
            CPACSCrossBeamAssemblyPosition(const CPACSCrossBeamAssemblyPosition&);
            CPACSCrossBeamAssemblyPosition& operator=(const CPACSCrossBeamAssemblyPosition&);
            #endif
        };
    }
    
    // This type is not customized, create alias in tigl namespace
    #ifdef CPP11
    using CCPACSCrossBeamAssemblyPosition = generated::CPACSCrossBeamAssemblyPosition;
    #else
    typedef generated::CPACSCrossBeamAssemblyPosition CCPACSCrossBeamAssemblyPosition;
    #endif
}
