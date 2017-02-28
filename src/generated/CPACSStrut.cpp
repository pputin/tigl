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
#include "CPACSStrut.h"

namespace tigl
{
    namespace generated
    {
        CPACSStrut::CPACSStrut(){}
        CPACSStrut::~CPACSStrut() {}
        
        void CPACSStrut::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read element length
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/length")) {
                m_length = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/length");
            }
            else {
                LOG(ERROR) << "Required element length is missing";
            }
            
            // read element radius
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/radius")) {
                m_radius_choice1 = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/radius");
            }
            
            // read element materialUID
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/materialUID")) {
                m_materialUID_choice1 = tixihelper::TixiGetElement<std::string>(tixiHandle, xpath + "/materialUID");
            }
            
            // read element innerRadius
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/innerRadius")) {
                m_innerRadius_choice1 = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/innerRadius");
            }
            
            // read element structuralElementUID
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/structuralElementUID")) {
                m_structuralElementUID_choice2 = tixihelper::TixiGetElement<std::string>(tixiHandle, xpath + "/structuralElementUID");
            }
            
        }
        
        void CPACSStrut::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write element length
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/length");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/length", m_length);
            
            // write element radius
            if (m_radius_choice1) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/radius");
                tixihelper::TixiSaveElement(tixiHandle, xpath + "/radius", *m_radius_choice1);
            }
            
            // write element materialUID
            if (m_materialUID_choice1) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/materialUID");
                tixihelper::TixiSaveElement(tixiHandle, xpath + "/materialUID", *m_materialUID_choice1);
            }
            
            // write element innerRadius
            if (m_innerRadius_choice1) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/innerRadius");
                tixihelper::TixiSaveElement(tixiHandle, xpath + "/innerRadius", *m_innerRadius_choice1);
            }
            
            // write element structuralElementUID
            if (m_structuralElementUID_choice2) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/structuralElementUID");
                tixihelper::TixiSaveElement(tixiHandle, xpath + "/structuralElementUID", *m_structuralElementUID_choice2);
            }
            
        }
        
        const double& CPACSStrut::GetLength() const
        {
            return m_length;
        }
        
        void CPACSStrut::SetLength(const double& value)
        {
            m_length = value;
        }
        
        bool CPACSStrut::HasRadius_choice1() const
        {
            return static_cast<bool>(m_radius_choice1);
        }
        
        const double& CPACSStrut::GetRadius_choice1() const
        {
            return *m_radius_choice1;
        }
        
        void CPACSStrut::SetRadius_choice1(const double& value)
        {
            m_radius_choice1 = value;
        }
        
        bool CPACSStrut::HasMaterialUID_choice1() const
        {
            return static_cast<bool>(m_materialUID_choice1);
        }
        
        const std::string& CPACSStrut::GetMaterialUID_choice1() const
        {
            return *m_materialUID_choice1;
        }
        
        void CPACSStrut::SetMaterialUID_choice1(const std::string& value)
        {
            m_materialUID_choice1 = value;
        }
        
        bool CPACSStrut::HasInnerRadius_choice1() const
        {
            return static_cast<bool>(m_innerRadius_choice1);
        }
        
        const double& CPACSStrut::GetInnerRadius_choice1() const
        {
            return *m_innerRadius_choice1;
        }
        
        void CPACSStrut::SetInnerRadius_choice1(const double& value)
        {
            m_innerRadius_choice1 = value;
        }
        
        bool CPACSStrut::HasStructuralElementUID_choice2() const
        {
            return static_cast<bool>(m_structuralElementUID_choice2);
        }
        
        const std::string& CPACSStrut::GetStructuralElementUID_choice2() const
        {
            return *m_structuralElementUID_choice2;
        }
        
        void CPACSStrut::SetStructuralElementUID_choice2(const std::string& value)
        {
            m_structuralElementUID_choice2 = value;
        }
        
    }
}
