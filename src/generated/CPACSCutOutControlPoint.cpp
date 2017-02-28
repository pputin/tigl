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
#include "CPACSCutOutControlPoint.h"

namespace tigl
{
    namespace generated
    {
        CPACSCutOutControlPoint::CPACSCutOutControlPoint(){}
        CPACSCutOutControlPoint::~CPACSCutOutControlPoint() {}
        
        void CPACSCutOutControlPoint::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read element relHeight
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/relHeight")) {
                m_relHeight = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/relHeight");
            }
            else {
                LOG(ERROR) << "Required element relHeight is missing";
            }
            
            // read element xsi
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/xsi")) {
                m_xsi = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/xsi");
            }
            else {
                LOG(ERROR) << "Required element xsi is missing";
            }
            
        }
        
        void CPACSCutOutControlPoint::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write element relHeight
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/relHeight");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/relHeight", m_relHeight);
            
            // write element xsi
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/xsi");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/xsi", m_xsi);
            
        }
        
        const double& CPACSCutOutControlPoint::GetRelHeight() const
        {
            return m_relHeight;
        }
        
        void CPACSCutOutControlPoint::SetRelHeight(const double& value)
        {
            m_relHeight = value;
        }
        
        const double& CPACSCutOutControlPoint::GetXsi() const
        {
            return m_xsi;
        }
        
        void CPACSCutOutControlPoint::SetXsi(const double& value)
        {
            m_xsi = value;
        }
        
    }
}
