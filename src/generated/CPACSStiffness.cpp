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
#include "CPACSStiffness.h"

namespace tigl
{
    namespace generated
    {
        CPACSStiffness::CPACSStiffness(){}
        CPACSStiffness::~CPACSStiffness() {}
        
        void CPACSStiffness::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read element EA
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/EA")) {
                m_EA = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/EA");
            }
            else {
                LOG(ERROR) << "Required element EA is missing";
            }
            
            // read element EIyy
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/EIyy")) {
                m_EIyy = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/EIyy");
            }
            else {
                LOG(ERROR) << "Required element EIyy is missing";
            }
            
            // read element EIzz
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/EIzz")) {
                m_EIzz = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/EIzz");
            }
            else {
                LOG(ERROR) << "Required element EIzz is missing";
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
        
        void CPACSStiffness::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write element EA
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/EA");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/EA", m_EA);
            
            // write element EIyy
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/EIyy");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/EIyy", m_EIyy);
            
            // write element EIzz
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/EIzz");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/EIzz", m_EIzz);
            
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
        
        const double& CPACSStiffness::GetEA() const
        {
            return m_EA;
        }
        
        void CPACSStiffness::SetEA(const double& value)
        {
            m_EA = value;
        }
        
        const double& CPACSStiffness::GetEIyy() const
        {
            return m_EIyy;
        }
        
        void CPACSStiffness::SetEIyy(const double& value)
        {
            m_EIyy = value;
        }
        
        const double& CPACSStiffness::GetEIzz() const
        {
            return m_EIzz;
        }
        
        void CPACSStiffness::SetEIzz(const double& value)
        {
            m_EIzz = value;
        }
        
        const double& CPACSStiffness::GetGIt() const
        {
            return m_GIt;
        }
        
        void CPACSStiffness::SetGIt(const double& value)
        {
            m_GIt = value;
        }
        
        const double& CPACSStiffness::GetG() const
        {
            return m_G;
        }
        
        void CPACSStiffness::SetG(const double& value)
        {
            m_G = value;
        }
        
        const double& CPACSStiffness::GetIt() const
        {
            return m_It;
        }
        
        void CPACSStiffness::SetIt(const double& value)
        {
            m_It = value;
        }
        
    }
}
