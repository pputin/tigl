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
#include "CPACSBeamStiffness.h"

namespace tigl
{
    namespace generated
    {
        CPACSBeamStiffness::CPACSBeamStiffness(){}
        CPACSBeamStiffness::~CPACSBeamStiffness() {}
        
        void CPACSBeamStiffness::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read attribute uID
            if (tixihelper::TixiCheckAttribute(tixiHandle, xpath, "uID")) {
                m_uID = tixihelper::TixiGetAttribute<std::string>(tixiHandle, xpath, "uID");
            }
            
            // read element EA
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/EA")) {
                m_EA = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/EA");
            }
            else {
                LOG(ERROR) << "Required element EA is missing";
            }
            
            // read element EIxx
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/EIxx")) {
                m_EIxx = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/EIxx");
            }
            else {
                LOG(ERROR) << "Required element EIxx is missing";
            }
            
            // read element EIyy
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/EIyy")) {
                m_EIyy = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/EIyy");
            }
            else {
                LOG(ERROR) << "Required element EIyy is missing";
            }
            
            // read element EIxy
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/EIxy")) {
                m_EIxy = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/EIxy");
            }
            else {
                LOG(ERROR) << "Required element EIxy is missing";
            }
            
            // read element GIt
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/GIt")) {
                m_GIt = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/GIt");
            }
            else {
                LOG(ERROR) << "Required element GIt is missing";
            }
            
            // read element G
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/G")) {
                m_G = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/G");
            }
            else {
                LOG(ERROR) << "Required element G is missing";
            }
            
            // read element It
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/It")) {
                m_It = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/It");
            }
            else {
                LOG(ERROR) << "Required element It is missing";
            }
            
        }
        
        void CPACSBeamStiffness::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write attribute uID
            if (m_uID) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/uID");
                tixihelper::TixiSaveAttribute(tixiHandle, xpath, "uID", *m_uID);
            }
            
            // write element EA
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/EA");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/EA", m_EA);
            
            // write element EIxx
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/EIxx");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/EIxx", m_EIxx);
            
            // write element EIyy
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/EIyy");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/EIyy", m_EIyy);
            
            // write element EIxy
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/EIxy");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/EIxy", m_EIxy);
            
            // write element GIt
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/GIt");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/GIt", m_GIt);
            
            // write element G
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/G");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/G", m_G);
            
            // write element It
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/It");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/It", m_It);
            
        }
        
        bool CPACSBeamStiffness::HasUID() const
        {
            return static_cast<bool>(m_uID);
        }
        
        const std::string& CPACSBeamStiffness::GetUID() const
        {
            return *m_uID;
        }
        
        void CPACSBeamStiffness::SetUID(const std::string& value)
        {
            m_uID = value;
        }
        
        const double& CPACSBeamStiffness::GetEA() const
        {
            return m_EA;
        }
        
        void CPACSBeamStiffness::SetEA(const double& value)
        {
            m_EA = value;
        }
        
        const double& CPACSBeamStiffness::GetEIxx() const
        {
            return m_EIxx;
        }
        
        void CPACSBeamStiffness::SetEIxx(const double& value)
        {
            m_EIxx = value;
        }
        
        const double& CPACSBeamStiffness::GetEIyy() const
        {
            return m_EIyy;
        }
        
        void CPACSBeamStiffness::SetEIyy(const double& value)
        {
            m_EIyy = value;
        }
        
        const double& CPACSBeamStiffness::GetEIxy() const
        {
            return m_EIxy;
        }
        
        void CPACSBeamStiffness::SetEIxy(const double& value)
        {
            m_EIxy = value;
        }
        
        const double& CPACSBeamStiffness::GetGIt() const
        {
            return m_GIt;
        }
        
        void CPACSBeamStiffness::SetGIt(const double& value)
        {
            m_GIt = value;
        }
        
        const double& CPACSBeamStiffness::GetG() const
        {
            return m_G;
        }
        
        void CPACSBeamStiffness::SetG(const double& value)
        {
            m_G = value;
        }
        
        const double& CPACSBeamStiffness::GetIt() const
        {
            return m_It;
        }
        
        void CPACSBeamStiffness::SetIt(const double& value)
        {
            m_It = value;
        }
        
    }
}
