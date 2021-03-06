// Copyright (c) 2018 RISC Software GmbH
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

#include <boost/optional.hpp>
#include <boost/utility/in_place_factory.hpp>
#include <string>
#include <tixi.h>
#include <typeinfo>
#include "CTiglError.h"
#include "tigl_internal.h"

namespace tigl
{
namespace generated
{
    // This class is used in:
    // CPACSCst2D
    // CPACSEmissivityMap
    // CPACSPointListRelXYZVector
    // CPACSPointListXYZVector
    // CPACSRotorBladeAttachment
    // CPACSSpecificHeatMap

    // generated from /xsd:schema/xsd:complexType[837]
    class CPACSStringVectorBase
    {
    public:
        TIGL_EXPORT CPACSStringVectorBase();
        TIGL_EXPORT virtual ~CPACSStringVectorBase();

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const std::string& GetMapType() const;
        TIGL_EXPORT virtual void SetMapType(const std::string& value);

        TIGL_EXPORT virtual const boost::optional<std::string>& GetMu() const;
        TIGL_EXPORT virtual void SetMu(const boost::optional<std::string>& value);

        TIGL_EXPORT virtual const boost::optional<std::string>& GetDelta() const;
        TIGL_EXPORT virtual void SetDelta(const boost::optional<std::string>& value);

        TIGL_EXPORT virtual const boost::optional<std::string>& GetA() const;
        TIGL_EXPORT virtual void SetA(const boost::optional<std::string>& value);

        TIGL_EXPORT virtual const boost::optional<std::string>& GetB() const;
        TIGL_EXPORT virtual void SetB(const boost::optional<std::string>& value);

        TIGL_EXPORT virtual const boost::optional<std::string>& GetC() const;
        TIGL_EXPORT virtual void SetC(const boost::optional<std::string>& value);

        TIGL_EXPORT virtual const boost::optional<std::string>& GetV() const;
        TIGL_EXPORT virtual void SetV(const boost::optional<std::string>& value);

        TIGL_EXPORT virtual const boost::optional<std::string>& GetW() const;
        TIGL_EXPORT virtual void SetW(const boost::optional<std::string>& value);

        TIGL_EXPORT virtual const std::string& GetSimpleContent() const;
        TIGL_EXPORT virtual void SetSimpleContent(const std::string& value);

    protected:
        std::string                  m_mapType;
        boost::optional<std::string> m_mu;
        boost::optional<std::string> m_delta;
        boost::optional<std::string> m_a;
        boost::optional<std::string> m_b;
        boost::optional<std::string> m_c;
        boost::optional<std::string> m_v;
        boost::optional<std::string> m_w;
        std::string                  m_simpleContent;

    private:
#ifdef HAVE_CPP11
        CPACSStringVectorBase(const CPACSStringVectorBase&) = delete;
        CPACSStringVectorBase& operator=(const CPACSStringVectorBase&) = delete;

        CPACSStringVectorBase(CPACSStringVectorBase&&) = delete;
        CPACSStringVectorBase& operator=(CPACSStringVectorBase&&) = delete;
#else
        CPACSStringVectorBase(const CPACSStringVectorBase&);
        CPACSStringVectorBase& operator=(const CPACSStringVectorBase&);
#endif
    };
} // namespace generated

// CPACSStringVectorBase is customized, use type CCPACSStringVector directly
} // namespace tigl
