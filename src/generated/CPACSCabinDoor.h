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
#include "CPACSCabinDoor_side.h"
#include "CPACSCabinDoor_type.h"

namespace tigl
{
    namespace generated
    {
        // This class is used in:
        // CPACSCabinDoors
        
        // generated from /xsd:schema/xsd:complexType[104]
        class CPACSCabinDoor
        {
        public:
            TIGL_EXPORT CPACSCabinDoor();
            TIGL_EXPORT virtual ~CPACSCabinDoor();
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT const std::string& GetUID() const;
            TIGL_EXPORT void SetUID(const std::string& value);
            
            TIGL_EXPORT const std::string& GetName() const;
            TIGL_EXPORT void SetName(const std::string& value);
            
            TIGL_EXPORT const std::string& GetDescription() const;
            TIGL_EXPORT void SetDescription(const std::string& value);
            
            TIGL_EXPORT const std::string& GetStructuralUID() const;
            TIGL_EXPORT void SetStructuralUID(const std::string& value);
            
            TIGL_EXPORT const int& GetPaxCapacity() const;
            TIGL_EXPORT void SetPaxCapacity(const int& value);
            
            TIGL_EXPORT const double& GetX() const;
            TIGL_EXPORT void SetX(const double& value);
            
            TIGL_EXPORT const double& GetZ() const;
            TIGL_EXPORT void SetZ(const double& value);
            
            TIGL_EXPORT const double& GetWidth() const;
            TIGL_EXPORT void SetWidth(const double& value);
            
            TIGL_EXPORT const double& GetHeight() const;
            TIGL_EXPORT void SetHeight(const double& value);
            
            TIGL_EXPORT const CPACSCabinDoor_side& GetSide() const;
            TIGL_EXPORT CPACSCabinDoor_side& GetSide();
            
            TIGL_EXPORT bool HasType() const;
            TIGL_EXPORT const CPACSCabinDoor_type& GetType() const;
            TIGL_EXPORT CPACSCabinDoor_type& GetType();
            
        protected:
            std::string                          m_uID;
            std::string                          m_name;
            std::string                          m_description;
            std::string                          m_structuralUID;
            int                                  m_paxCapacity;
            double                               m_x;
            double                               m_z;
            double                               m_width;
            double                               m_height;
            CPACSCabinDoor_side                  m_side;
            boost::optional<CPACSCabinDoor_type> m_type;
            
        private:
            #ifdef HAVE_CPP11
            CPACSCabinDoor(const CPACSCabinDoor&) = delete;
            CPACSCabinDoor& operator=(const CPACSCabinDoor&) = delete;
            
            CPACSCabinDoor(CPACSCabinDoor&&) = delete;
            CPACSCabinDoor& operator=(CPACSCabinDoor&&) = delete;
            #else
            CPACSCabinDoor(const CPACSCabinDoor&);
            CPACSCabinDoor& operator=(const CPACSCabinDoor&);
            #endif
        };
    }
    
    // This type is not customized, create alias in tigl namespace
    #ifdef CPP11
    using CCPACSCabinDoor = generated::CPACSCabinDoor;
    #else
    typedef generated::CPACSCabinDoor CCPACSCabinDoor;
    #endif
}
