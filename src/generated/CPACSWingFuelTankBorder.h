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
        // CPACSWingFuelTankGeometry
        
        // generated from /xsd:schema/xsd:complexType[898]
        class CPACSWingFuelTankBorder
        {
        public:
            TIGL_EXPORT CPACSWingFuelTankBorder();
            TIGL_EXPORT virtual ~CPACSWingFuelTankBorder();
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT bool HasSparUID_choice1() const;
            TIGL_EXPORT const std::string& GetSparUID_choice1() const;
            TIGL_EXPORT void SetSparUID_choice1(const std::string& value);
            
            TIGL_EXPORT bool HasRibDefinitionUID_choice2() const;
            TIGL_EXPORT const std::string& GetRibDefinitionUID_choice2() const;
            TIGL_EXPORT void SetRibDefinitionUID_choice2(const std::string& value);
            
            TIGL_EXPORT bool HasRibNumber_choice2() const;
            TIGL_EXPORT const int& GetRibNumber_choice2() const;
            TIGL_EXPORT void SetRibNumber_choice2(const int& value);
            
        protected:
            boost::optional<std::string> m_sparUID_choice1;
            boost::optional<std::string> m_ribDefinitionUID_choice2;
            boost::optional<int>         m_ribNumber_choice2;
            
        private:
            #ifdef HAVE_CPP11
            CPACSWingFuelTankBorder(const CPACSWingFuelTankBorder&) = delete;
            CPACSWingFuelTankBorder& operator=(const CPACSWingFuelTankBorder&) = delete;
            
            CPACSWingFuelTankBorder(CPACSWingFuelTankBorder&&) = delete;
            CPACSWingFuelTankBorder& operator=(CPACSWingFuelTankBorder&&) = delete;
            #else
            CPACSWingFuelTankBorder(const CPACSWingFuelTankBorder&);
            CPACSWingFuelTankBorder& operator=(const CPACSWingFuelTankBorder&);
            #endif
        };
    }
    
    // This type is not customized, create alias in tigl namespace
    #ifdef CPP11
    using CCPACSWingFuelTankBorder = generated::CPACSWingFuelTankBorder;
    #else
    typedef generated::CPACSWingFuelTankBorder CCPACSWingFuelTankBorder;
    #endif
}
