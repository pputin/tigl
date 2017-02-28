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

#include "TixiHelper.h"
#include "CTiglLogging.h"
#include "CTiglError.h"
#include "CPACSGearDeflectionVector.h"

namespace tigl
{
    namespace generated
    {
        CPACSGearDeflectionVector::CPACSGearDeflectionVector(){}
        CPACSGearDeflectionVector::~CPACSGearDeflectionVector() {}
        
        void CPACSGearDeflectionVector::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read element gearUID
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/gearUID")) {
                m_gearUID = tixihelper::TixiGetElement<std::string>(tixiHandle, xpath + "/gearUID");
            }
            else {
                LOG(ERROR) << "Required element gearUID is missing";
            }
            
            // read element relDeflection
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/relDeflection")) {
                m_relDeflection.ReadCPACS(tixiHandle, xpath + "/relDeflection");
            }
            else {
                LOG(ERROR) << "Required element relDeflection is missing";
            }
            
        }
        
        void CPACSGearDeflectionVector::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write element gearUID
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/gearUID");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/gearUID", m_gearUID);
            
            // write element relDeflection
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/relDeflection");
            m_relDeflection.WriteCPACS(tixiHandle, xpath + "/relDeflection");
            
        }
        
        const std::string& CPACSGearDeflectionVector::GetGearUID() const
        {
            return m_gearUID;
        }
        
        void CPACSGearDeflectionVector::SetGearUID(const std::string& value)
        {
            m_gearUID = value;
        }
        
        const CCPACSStringVector& CPACSGearDeflectionVector::GetRelDeflection() const
        {
            return m_relDeflection;
        }
        
        CCPACSStringVector& CPACSGearDeflectionVector::GetRelDeflection()
        {
            return m_relDeflection;
        }
        
    }
}
