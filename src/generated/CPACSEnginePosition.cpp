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
#include "CPACSEnginePosition.h"

namespace tigl
{
    namespace generated
    {
        CPACSEnginePosition::CPACSEnginePosition(){}
        CPACSEnginePosition::~CPACSEnginePosition() {}
        
        void CPACSEnginePosition::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read attribute uID
            if (tixihelper::TixiCheckAttribute(tixiHandle, xpath, "uID")) {
                m_uID = tixihelper::TixiGetAttribute<std::string>(tixiHandle, xpath, "uID");
            }
            else {
                LOG(ERROR) << "Required attribute uID is missing";
            }
            
            // read attribute symmetry
            if (tixihelper::TixiCheckAttribute(tixiHandle, xpath, "symmetry")) {
                m_symmetry = stringToTiglSymmetryAxis(tixihelper::TixiGetAttribute<std::string>(tixiHandle, xpath, "symmetry"));
            }
            
            // read element name
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/name")) {
                m_name = tixihelper::TixiGetElement<std::string>(tixiHandle, xpath + "/name");
            }
            else {
                LOG(ERROR) << "Required element name is missing";
            }
            
            // read element description
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/description")) {
                m_description = tixihelper::TixiGetElement<std::string>(tixiHandle, xpath + "/description");
            }
            
            // read element engineUID
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/engineUID")) {
                m_engineUID = tixihelper::TixiGetElement<std::string>(tixiHandle, xpath + "/engineUID");
            }
            else {
                LOG(ERROR) << "Required element engineUID is missing";
            }
            
            // read element parentUID
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/parentUID")) {
                m_parentUID = tixihelper::TixiGetElement<std::string>(tixiHandle, xpath + "/parentUID");
            }
            else {
                LOG(ERROR) << "Required element parentUID is missing";
            }
            
            // read element transformation
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/transformation")) {
                m_transformation.ReadCPACS(tixiHandle, xpath + "/transformation");
            }
            else {
                LOG(ERROR) << "Required element transformation is missing";
            }
            
        }
        
        void CPACSEnginePosition::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write attribute uID
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/uID");
            tixihelper::TixiSaveAttribute(tixiHandle, xpath, "uID", m_uID);
            
            // write attribute symmetry
            if (m_symmetry) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/symmetry");
                tixihelper::TixiSaveAttribute(tixiHandle, xpath, "symmetry", TiglSymmetryAxisToString(*m_symmetry));
            }
            
            // write element name
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/name");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/name", m_name);
            
            // write element description
            if (m_description) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/description");
                tixihelper::TixiSaveElement(tixiHandle, xpath + "/description", *m_description);
            }
            
            // write element engineUID
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/engineUID");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/engineUID", m_engineUID);
            
            // write element parentUID
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/parentUID");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/parentUID", m_parentUID);
            
            // write element transformation
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/transformation");
            m_transformation.WriteCPACS(tixiHandle, xpath + "/transformation");
            
        }
        
        const std::string& CPACSEnginePosition::GetUID() const
        {
            return m_uID;
        }
        
        void CPACSEnginePosition::SetUID(const std::string& value)
        {
            m_uID = value;
        }
        
        bool CPACSEnginePosition::HasSymmetry() const
        {
            return static_cast<bool>(m_symmetry);
        }
        
        const TiglSymmetryAxis& CPACSEnginePosition::GetSymmetry() const
        {
            return *m_symmetry;
        }
        
        void CPACSEnginePosition::SetSymmetry(const TiglSymmetryAxis& value)
        {
            m_symmetry = value;
        }
        
        const std::string& CPACSEnginePosition::GetName() const
        {
            return m_name;
        }
        
        void CPACSEnginePosition::SetName(const std::string& value)
        {
            m_name = value;
        }
        
        bool CPACSEnginePosition::HasDescription() const
        {
            return static_cast<bool>(m_description);
        }
        
        const std::string& CPACSEnginePosition::GetDescription() const
        {
            return *m_description;
        }
        
        void CPACSEnginePosition::SetDescription(const std::string& value)
        {
            m_description = value;
        }
        
        const std::string& CPACSEnginePosition::GetEngineUID() const
        {
            return m_engineUID;
        }
        
        void CPACSEnginePosition::SetEngineUID(const std::string& value)
        {
            m_engineUID = value;
        }
        
        const std::string& CPACSEnginePosition::GetParentUID() const
        {
            return m_parentUID;
        }
        
        void CPACSEnginePosition::SetParentUID(const std::string& value)
        {
            m_parentUID = value;
        }
        
        const CCPACSTransformation& CPACSEnginePosition::GetTransformation() const
        {
            return m_transformation;
        }
        
        CCPACSTransformation& CPACSEnginePosition::GetTransformation()
        {
            return m_transformation;
        }
        
    }
}
