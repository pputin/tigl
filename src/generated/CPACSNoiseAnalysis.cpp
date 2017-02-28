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
#include "CPACSNoiseAnalysis.h"

namespace tigl
{
    namespace generated
    {
        CPACSNoiseAnalysis::CPACSNoiseAnalysis(){}
        CPACSNoiseAnalysis::~CPACSNoiseAnalysis() {}
        
        void CPACSNoiseAnalysis::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read element noiseLevelApproach
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/noiseLevelApproach")) {
                m_noiseLevelApproach = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/noiseLevelApproach");
            }
            
            // read element noiseLevelSideline
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/noiseLevelSideline")) {
                m_noiseLevelSideline = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/noiseLevelSideline");
            }
            
            // read element noiseLevelTakeOff
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/noiseLevelTakeOff")) {
                m_noiseLevelTakeOff = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/noiseLevelTakeOff");
            }
            
        }
        
        void CPACSNoiseAnalysis::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write element noiseLevelApproach
            if (m_noiseLevelApproach) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/noiseLevelApproach");
                tixihelper::TixiSaveElement(tixiHandle, xpath + "/noiseLevelApproach", *m_noiseLevelApproach);
            }
            
            // write element noiseLevelSideline
            if (m_noiseLevelSideline) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/noiseLevelSideline");
                tixihelper::TixiSaveElement(tixiHandle, xpath + "/noiseLevelSideline", *m_noiseLevelSideline);
            }
            
            // write element noiseLevelTakeOff
            if (m_noiseLevelTakeOff) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/noiseLevelTakeOff");
                tixihelper::TixiSaveElement(tixiHandle, xpath + "/noiseLevelTakeOff", *m_noiseLevelTakeOff);
            }
            
        }
        
        bool CPACSNoiseAnalysis::HasNoiseLevelApproach() const
        {
            return static_cast<bool>(m_noiseLevelApproach);
        }
        
        const double& CPACSNoiseAnalysis::GetNoiseLevelApproach() const
        {
            return *m_noiseLevelApproach;
        }
        
        void CPACSNoiseAnalysis::SetNoiseLevelApproach(const double& value)
        {
            m_noiseLevelApproach = value;
        }
        
        bool CPACSNoiseAnalysis::HasNoiseLevelSideline() const
        {
            return static_cast<bool>(m_noiseLevelSideline);
        }
        
        const double& CPACSNoiseAnalysis::GetNoiseLevelSideline() const
        {
            return *m_noiseLevelSideline;
        }
        
        void CPACSNoiseAnalysis::SetNoiseLevelSideline(const double& value)
        {
            m_noiseLevelSideline = value;
        }
        
        bool CPACSNoiseAnalysis::HasNoiseLevelTakeOff() const
        {
            return static_cast<bool>(m_noiseLevelTakeOff);
        }
        
        const double& CPACSNoiseAnalysis::GetNoiseLevelTakeOff() const
        {
            return *m_noiseLevelTakeOff;
        }
        
        void CPACSNoiseAnalysis::SetNoiseLevelTakeOff(const double& value)
        {
            m_noiseLevelTakeOff = value;
        }
        
    }
}
