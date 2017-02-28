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

#include <string>
#include <cctype>

#include "CTiglError.h"

namespace tigl
{
    namespace generated
    {
        // This enum is used in:
        // CPACSCabinFloorElement_type
        
        // generated from /xsd:schema/xsd:complexType[106]/xsd:complexContent/xsd:extension/xsd:sequence/xsd:element[3]/xsd:complexType/xsd:simpleContent
        #ifdef HAVE_CPP11
        enum class CPACSCabinFloorElement_type_SimpleContent
        #else
        enum CPACSCabinFloorElement_type_SimpleContent
        #endif
        {
            toilet,
            kitchen,
            miscellaneous
        };
        
        #ifdef HAVE_CPP11
        inline std::string CPACSCabinFloorElement_type_SimpleContentToString(const CPACSCabinFloorElement_type_SimpleContent& value)
        {
            switch(value) {
            case CPACSCabinFloorElement_type_SimpleContent::toilet: return "toilet";
            case CPACSCabinFloorElement_type_SimpleContent::kitchen: return "kitchen";
            case CPACSCabinFloorElement_type_SimpleContent::miscellaneous: return "miscellaneous";
            default: throw CTiglError("Invalid enum value \"" + std::to_string(static_cast<int>(value)) + "\" for enum type CPACSCabinFloorElement_type_SimpleContent");
            }
        }
        inline CPACSCabinFloorElement_type_SimpleContent stringToCPACSCabinFloorElement_type_SimpleContent(const std::string& value)
        {
            auto toLower = [](std::string str) { for (char& c : str) { c = std::tolower(c); } return str; };
            if (toLower(value) == "toilet") { return CPACSCabinFloorElement_type_SimpleContent::toilet; }
            if (toLower(value) == "kitchen") { return CPACSCabinFloorElement_type_SimpleContent::kitchen; }
            if (toLower(value) == "miscellaneous") { return CPACSCabinFloorElement_type_SimpleContent::miscellaneous; }
            throw CTiglError("Invalid string value \"" + value + "\" for enum type CPACSCabinFloorElement_type_SimpleContent");
        }
        #else
        inline std::string CPACSCabinFloorElement_type_SimpleContentToString(const CPACSCabinFloorElement_type_SimpleContent& value)
        {
            switch(value) {
            case toilet: return "toilet";
            case kitchen: return "kitchen";
            case miscellaneous: return "miscellaneous";
            default: throw CTiglError("Invalid enum value \"" + std::to_string(static_cast<int>(value)) + "\" for enum type CPACSCabinFloorElement_type_SimpleContent");
            }
        }
        inline CPACSCabinFloorElement_type_SimpleContent stringToCPACSCabinFloorElement_type_SimpleContent(const std::string& value)
        {
            auto toLower = [](std::string str) { for (char& c : str) { c = std::tolower(c); } return str; };
            if (toLower(value) == "toilet") { return toilet; }
            if (toLower(value) == "kitchen") { return kitchen; }
            if (toLower(value) == "miscellaneous") { return miscellaneous; }
            throw CTiglError("Invalid string value \"" + value + "\" for enum type CPACSCabinFloorElement_type_SimpleContent");
        }
        #endif
    }
}
