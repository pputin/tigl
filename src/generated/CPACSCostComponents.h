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
#include "CPACSGenericCost.h"
#include "CPACSCostWings.h"
#include "CPACSCostFuselages.h"
#include "CPACSCostEnginePylons.h"
#include "CPACSCostLandingGear.h"

namespace tigl
{
    namespace generated
    {
        // This class is used in:
        // CPACSRecurringCost
        
        // generated from /xsd:schema/xsd:complexType[199]
        class CPACSCostComponents
        {
        public:
            TIGL_EXPORT CPACSCostComponents();
            TIGL_EXPORT virtual ~CPACSCostComponents();
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT const CPACSGenericCost& GetCostDescription() const;
            TIGL_EXPORT CPACSGenericCost& GetCostDescription();
            
            TIGL_EXPORT bool HasWings() const;
            TIGL_EXPORT const CPACSCostWings& GetWings() const;
            TIGL_EXPORT CPACSCostWings& GetWings();
            
            TIGL_EXPORT bool HasFuselages() const;
            TIGL_EXPORT const CPACSCostFuselages& GetFuselages() const;
            TIGL_EXPORT CPACSCostFuselages& GetFuselages();
            
            TIGL_EXPORT bool HasEnginePylons() const;
            TIGL_EXPORT const CPACSCostEnginePylons& GetEnginePylons() const;
            TIGL_EXPORT CPACSCostEnginePylons& GetEnginePylons();
            
            TIGL_EXPORT bool HasLandingGear() const;
            TIGL_EXPORT const CPACSCostLandingGear& GetLandingGear() const;
            TIGL_EXPORT CPACSCostLandingGear& GetLandingGear();
            
        protected:
            CPACSGenericCost                       m_costDescription;
            boost::optional<CPACSCostWings>        m_wings;
            boost::optional<CPACSCostFuselages>    m_fuselages;
            boost::optional<CPACSCostEnginePylons> m_enginePylons;
            boost::optional<CPACSCostLandingGear>  m_landingGear;
            
        private:
            #ifdef HAVE_CPP11
            CPACSCostComponents(const CPACSCostComponents&) = delete;
            CPACSCostComponents& operator=(const CPACSCostComponents&) = delete;
            
            CPACSCostComponents(CPACSCostComponents&&) = delete;
            CPACSCostComponents& operator=(CPACSCostComponents&&) = delete;
            #else
            CPACSCostComponents(const CPACSCostComponents&);
            CPACSCostComponents& operator=(const CPACSCostComponents&);
            #endif
        };
    }
    
    // This type is not customized, create alias in tigl namespace
    #ifdef CPP11
    using CCPACSCostComponents = generated::CPACSCostComponents;
    #else
    typedef generated::CPACSCostComponents CCPACSCostComponents;
    #endif
}
