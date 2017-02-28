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
        // CPACSIntercostalsAssembly
        
        // generated from /xsd:schema/xsd:complexType[457]
        class CPACSIntercostalPosition
        {
        public:
            TIGL_EXPORT CPACSIntercostalPosition();
            TIGL_EXPORT virtual ~CPACSIntercostalPosition();
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT bool HasUID() const;
            TIGL_EXPORT const std::string& GetUID() const;
            TIGL_EXPORT void SetUID(const std::string& value);
            
            TIGL_EXPORT bool HasName() const;
            TIGL_EXPORT const std::string& GetName() const;
            TIGL_EXPORT void SetName(const std::string& value);
            
            TIGL_EXPORT bool HasDescription() const;
            TIGL_EXPORT const std::string& GetDescription() const;
            TIGL_EXPORT void SetDescription(const std::string& value);
            
            TIGL_EXPORT const std::string& GetFrontFrameUID() const;
            TIGL_EXPORT void SetFrontFrameUID(const std::string& value);
            
            TIGL_EXPORT const std::string& GetRearFrameUID() const;
            TIGL_EXPORT void SetRearFrameUID(const std::string& value);
            
            TIGL_EXPORT const std::string& GetDoorUID() const;
            TIGL_EXPORT void SetDoorUID(const std::string& value);
            
            TIGL_EXPORT const double& GetPositionRelZ() const;
            TIGL_EXPORT void SetPositionRelZ(const double& value);
            
            TIGL_EXPORT const std::string& GetStructuralElementUID() const;
            TIGL_EXPORT void SetStructuralElementUID(const std::string& value);
            
        protected:
            boost::optional<std::string> m_uID;
            boost::optional<std::string> m_name;
            boost::optional<std::string> m_description;
            std::string                  m_frontFrameUID;
            std::string                  m_rearFrameUID;
            std::string                  m_doorUID;
            double                       m_positionRelZ;
            std::string                  m_structuralElementUID;
            
        private:
            #ifdef HAVE_CPP11
            CPACSIntercostalPosition(const CPACSIntercostalPosition&) = delete;
            CPACSIntercostalPosition& operator=(const CPACSIntercostalPosition&) = delete;
            
            CPACSIntercostalPosition(CPACSIntercostalPosition&&) = delete;
            CPACSIntercostalPosition& operator=(CPACSIntercostalPosition&&) = delete;
            #else
            CPACSIntercostalPosition(const CPACSIntercostalPosition&);
            CPACSIntercostalPosition& operator=(const CPACSIntercostalPosition&);
            #endif
        };
    }
    
    // This type is not customized, create alias in tigl namespace
    #ifdef CPP11
    using CCPACSIntercostalPosition = generated::CPACSIntercostalPosition;
    #else
    typedef generated::CPACSIntercostalPosition CCPACSIntercostalPosition;
    #endif
}
