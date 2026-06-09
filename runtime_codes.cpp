/**
 *  Runtime Codes: GENERAL INFORMATION
 *
 */

#include <fstream>
#include <iostream>
#include <sstream>

#include <libcellml>

int main(int argc, char* argv[])
{
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << " RUNTIME CODES: GENERAL INFORMATION USING LIBCELLML" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;

    // start - MISCELLANEOUS_ISSUES
    libcellml::Issue::ReferenceRule::INVALID_ARGUMENT;
    // end - MISCELLANEOUS_ISSUES_END

    // start - ANALYSER_EQUATION_NOT_EQUALITY_STATEMENT
    libcellml::Issue::ReferenceRule::ANALYSER_EQUATION_NOT_EQUALITY_STATEMENT;
    // start - ANALYSER_UNITS
    libcellml::Issue::ReferenceRule::ANALYSER_UNITS;
    // start - ANALYSER_UNLINKED_UNITS
    libcellml::Issue::ReferenceRule::ANALYSER_UNLINKED_UNITS;
    // start - ANALYSER_VARIABLE_INITIALISED_MORE_THAN_ONCE
    libcellml::Issue::ReferenceRule::ANALYSER_VARIABLE_INITIALISED_MORE_THAN_ONCE;
    // start - ANALYSER_VARIABLE_INITIALISED_USING_ALGEBRAIC_VARIABLE
    libcellml::Issue::ReferenceRule::ANALYSER_VARIABLE_INITIALISED_USING_ALGEBRAIC_VARIABLE;
    // start - ANALYSER_VARIABLE_INITIALISED_USING_VARIABLE_WITH_DIFFERENT_UNITS
    libcellml::Issue::ReferenceRule::ANALYSER_VARIABLE_INITIALISED_USING_VARIABLE_WITH_DIFFERENT_UNITS;
    // start - ANALYSER_VOI_INITIALISED
    libcellml::Issue::ReferenceRule::ANALYSER_VOI_INITIALISED;
    // start - ANALYSER_VOI_SEVERAL
    libcellml::Issue::ReferenceRule::ANALYSER_VOI_SEVERAL;
    // start - ANALYSER_ODE_NOT_FIRST_ORDER
    libcellml::Issue::ReferenceRule::ANALYSER_ODE_NOT_FIRST_ORDER;
    // start - ANALYSER_VARIABLE_UNUSED
    libcellml::Issue::ReferenceRule::ANALYSER_VARIABLE_UNUSED;
    // start - ANALYSER_STATE_NOT_INITIALISED
    libcellml::Issue::ReferenceRule::ANALYSER_STATE_NOT_INITIALISED;
    // start - ANALYSER_STATE_RATE_AS_ALGEBRAIC_VARIABLE
    libcellml::Issue::ReferenceRule::ANALYSER_STATE_RATE_AS_ALGEBRAIC_VARIABLE;
    // start - ANALYSER_VARIABLE_UNDERCONSTRAINED
    libcellml::Issue::ReferenceRule::ANALYSER_VARIABLE_UNDERCONSTRAINED;
    // start - ANALYSER_VARIABLE_OVERCONSTRAINED
    libcellml::Issue::ReferenceRule::ANALYSER_VARIABLE_OVERCONSTRAINED;
    // start - ANALYSER_EXTERNAL_VARIABLE_DIFFERENT_MODEL
    libcellml::Issue::ReferenceRule::ANALYSER_EXTERNAL_VARIABLE_DIFFERENT_MODEL;
    // start - ANALYSER_EXTERNAL_VARIABLE_VOI
    libcellml::Issue::ReferenceRule::ANALYSER_EXTERNAL_VARIABLE_VOI;
    // start - ANALYSER_EXTERNAL_VARIABLE_USE_PRIMARY_VARIABLE
    libcellml::Issue::ReferenceRule::ANALYSER_EXTERNAL_VARIABLE_USE_PRIMARY_VARIABLE;
    // end - ANALYSER_ISSUES_END

    // start - ANNOTATOR_ID_NOT_FOUND
    libcellml::Issue::ReferenceRule::ANNOTATOR_ID_NOT_FOUND;
    // start - ANNOTATOR_ID_NOT_UNIQUE
    libcellml::Issue::ReferenceRule::ANNOTATOR_ID_NOT_UNIQUE;
    // start - ANNOTATOR_NO_MODEL
    libcellml::Issue::ReferenceRule::ANNOTATOR_NO_MODEL;
    // start - ANNOTATOR_INCONSISTENT_TYPE
    libcellml::Issue::ReferenceRule::ANNOTATOR_INCONSISTENT_TYPE;
    // start - ANNOTATOR_NULL_MODEL
    libcellml::Issue::ReferenceRule::ANNOTATOR_NULL_MODEL;
    // end - ANNOTATOR_ISSUES_END

    // start - IMPORTER_ERROR_IMPORTING_UNITS
    libcellml::Issue::ReferenceRule::IMPORTER_ERROR_IMPORTING_UNITS;
    // start - IMPORTER_MISSING_FILE
    libcellml::Issue::ReferenceRule::IMPORTER_MISSING_FILE;
    // start - IMPORTER_MISSING_COMPONENT
    libcellml::Issue::ReferenceRule::IMPORTER_MISSING_COMPONENT;
    // start - IMPORTER_MISSING_UNITS
    libcellml::Issue::ReferenceRule::IMPORTER_MISSING_UNITS;
    // start - IMPORTER_NULL_MODEL
    libcellml::Issue::ReferenceRule::IMPORTER_NULL_MODEL;
    // start - IMPORTER_UNDEFINED_MODEL
    libcellml::Issue::ReferenceRule::IMPORTER_UNDEFINED_MODEL;
    // start - IMPORTER_UNRESOLVED_IMPORTS
    libcellml::Issue::ReferenceRule::IMPORTER_UNRESOLVED_IMPORTS;
    // end - IMPORTER_ISSUES_END

    // start - GENERATOR_NULL_MODEL
    libcellml::Issue::ReferenceRule::GENERATOR_NULL_MODEL;
    // start - GENERATOR_NULL_VARIABLE
    libcellml::Issue::ReferenceRule::GENERATOR_NULL_VARIABLE;
    // start - GENERATOR_VOI_VARIABLE_ALWAYS_TRACKED
    libcellml::Issue::ReferenceRule::GENERATOR_VOI_VARIABLE_ALWAYS_TRACKED;
    // start - GENERATOR_VOI_VARIABLE_NOT_UNTRACKABLE
    libcellml::Issue::ReferenceRule::GENERATOR_VOI_VARIABLE_NOT_UNTRACKABLE;
    // start - GENERATOR_STATE_VARIABLE_ALWAYS_TRACKED
    libcellml::Issue::ReferenceRule::GENERATOR_STATE_VARIABLE_ALWAYS_TRACKED;
    // start - GENERATOR_STATE_VARIABLE_NOT_UNTRACKABLE
    libcellml::Issue::ReferenceRule::GENERATOR_STATE_VARIABLE_NOT_UNTRACKABLE;
    // start - GENERATOR_EXTERNAL_VARIABLE_ALWAYS_TRACKED
    libcellml::Issue::ReferenceRule::GENERATOR_EXTERNAL_VARIABLE_ALWAYS_TRACKED;
    // start - GENERATOR_EXTERNAL_VARIABLE_NOT_UNTRACKABLE
    libcellml::Issue::ReferenceRule::GENERATOR_EXTERNAL_VARIABLE_NOT_UNTRACKABLE;
    // start - GENERATOR_NLA_BASED_VARIABLE_ALWAYS_TRACKED
    libcellml::Issue::ReferenceRule::GENERATOR_NLA_BASED_VARIABLE_ALWAYS_TRACKED;
    // start - GENERATOR_NLA_BASED_VARIABLE_NOT_UNTRACKABLE
    libcellml::Issue::ReferenceRule::GENERATOR_NLA_BASED_VARIABLE_NOT_UNTRACKABLE;
    // start - GENERATOR_EXTERNALLY_NEEDED_VARIABLE_ALWAYS_TRACKED
    libcellml::Issue::ReferenceRule::GENERATOR_EXTERNALLY_NEEDED_VARIABLE_ALWAYS_TRACKED;
    // start - GENERATOR_EXTERNALLY_NEEDED_VARIABLE_NOT_UNTRACKABLE
    libcellml::Issue::ReferenceRule::GENERATOR_EXTERNALLY_NEEDED_VARIABLE_NOT_UNTRACKABLE;
    // end - GENERATOR_ISSUES_END

    // start - XML
    libcellml::Issue::ReferenceRule::XML;
    // start - XML_UNEXPECTED_ELEMENT
    libcellml::Issue::ReferenceRule::XML_UNEXPECTED_ELEMENT;
    // start - XML_UNEXPECTED_CHARACTER
    libcellml::Issue::ReferenceRule::XML_UNEXPECTED_CHARACTER;
    // start - XML_UNEXPECTED_NAMESPACE
    libcellml::Issue::ReferenceRule::XML_UNEXPECTED_NAMESPACE;
    // start - XML_ATTRIBUTE_HAS_NAMESPACE
    libcellml::Issue::ReferenceRule::XML_ATTRIBUTE_HAS_NAMESPACE;
    // start - XML_ID_ATTRIBUTE
    libcellml::Issue::ReferenceRule::XML_ID_ATTRIBUTE;
    // start - MODEL_ELEMENT
    libcellml::Issue::ReferenceRule::MODEL_ELEMENT;
    // start - MODEL_NAME
    libcellml::Issue::ReferenceRule::MODEL_NAME;
    // start - MODEL_NAME_VALUE
    libcellml::Issue::ReferenceRule::MODEL_NAME_VALUE;
    // start - MODEL_CHILD
    libcellml::Issue::ReferenceRule::MODEL_CHILD;
    // start - MODEL_MORE_THAN_ONE_ENCAPSULATION
    libcellml::Issue::ReferenceRule::MODEL_MORE_THAN_ONE_ENCAPSULATION;
    // start - IMPORT_ELEMENT
    libcellml::Issue::ReferenceRule::IMPORT_ELEMENT;
    // start - IMPORT_HREF
    libcellml::Issue::ReferenceRule::IMPORT_HREF;
    // start - IMPORT_HREF_LOCATOR
    libcellml::Issue::ReferenceRule::IMPORT_HREF_LOCATOR;
    // start - IMPORT_CHILD
    libcellml::Issue::ReferenceRule::IMPORT_CHILD;
    // start - IMPORT_EQUIVALENT_INFOSET
    libcellml::Issue::ReferenceRule::IMPORT_EQUIVALENT_INFOSET;
    // start - IMPORT_UNITS_ELEMENT
    libcellml::Issue::ReferenceRule::IMPORT_UNITS_ELEMENT;
    // start - IMPORT_UNITS_NAME
    libcellml::Issue::ReferenceRule::IMPORT_UNITS_NAME;
    // start - IMPORT_UNITS_NAME_VALUE
    libcellml::Issue::ReferenceRule::IMPORT_UNITS_NAME_VALUE;
    // start - IMPORT_UNITS_NAME_UNIQUE
    libcellml::Issue::ReferenceRule::IMPORT_UNITS_NAME_UNIQUE;
    // start - IMPORT_UNITS_UNITS_REFERENCE
    libcellml::Issue::ReferenceRule::IMPORT_UNITS_UNITS_REFERENCE;
    // start - IMPORT_UNITS_UNITS_REFERENCE_VALUE
    libcellml::Issue::ReferenceRule::IMPORT_UNITS_UNITS_REFERENCE_VALUE;
    // start - IMPORT_UNITS_UNITS_REFERENCE_VALUE_TARGET
    libcellml::Issue::ReferenceRule::IMPORT_UNITS_UNITS_REFERENCE_VALUE_TARGET;
    // start - IMPORT_COMPONENT_ELEMENT
    libcellml::Issue::ReferenceRule::IMPORT_COMPONENT_ELEMENT;
    // start - IMPORT_COMPONENT_NAME
    libcellml::Issue::ReferenceRule::IMPORT_COMPONENT_NAME;
    // start - IMPORT_COMPONENT_NAME_VALUE
    libcellml::Issue::ReferenceRule::IMPORT_COMPONENT_NAME_VALUE;
    // start - IMPORT_COMPONENT_NAME_UNIQUE
    libcellml::Issue::ReferenceRule::IMPORT_COMPONENT_NAME_UNIQUE;
    // start - IMPORT_COMPONENT_COMPONENT_REFERENCE
    libcellml::Issue::ReferenceRule::IMPORT_COMPONENT_COMPONENT_REFERENCE;
    // start - IMPORT_COMPONENT_COMPONENT_REFERENCE_VALUE
    libcellml::Issue::ReferenceRule::IMPORT_COMPONENT_COMPONENT_REFERENCE_VALUE;
    // start - IMPORT_COMPONENT_COMPONENT_REFERENCE_TARGET
    libcellml::Issue::ReferenceRule::IMPORT_COMPONENT_COMPONENT_REFERENCE_TARGET;
    // start - UNITS_ELEMENT
    libcellml::Issue::ReferenceRule::UNITS_ELEMENT;
    // start - UNITS_NAME
    libcellml::Issue::ReferenceRule::UNITS_NAME;
    // start - UNITS_NAME_VALUE
    libcellml::Issue::ReferenceRule::UNITS_NAME_VALUE;
    // start - UNITS_NAME_UNIQUE
    libcellml::Issue::ReferenceRule::UNITS_NAME_UNIQUE;
    // start - UNITS_STANDARD
    libcellml::Issue::ReferenceRule::UNITS_STANDARD;
    // start - UNITS_CHILD
    libcellml::Issue::ReferenceRule::UNITS_CHILD;
    // start - UNIT_ELEMENT
    libcellml::Issue::ReferenceRule::UNIT_ELEMENT;
    // start - UNIT_UNITS
    libcellml::Issue::ReferenceRule::UNIT_UNITS;
    // start - UNIT_UNITS_REFERENCE
    libcellml::Issue::ReferenceRule::UNIT_UNITS_REFERENCE;
    // start - UNIT_UNITS_CIRCULAR_REFERENCE
    libcellml::Issue::ReferenceRule::UNIT_UNITS_CIRCULAR_REFERENCE;
    // start - UNIT_ATTRIBUTE_OPTIONAL
    libcellml::Issue::ReferenceRule::UNIT_ATTRIBUTE_OPTIONAL;
    // start - UNIT_ATTRIBUTE_PREFIX_VALUE
    libcellml::Issue::ReferenceRule::UNIT_ATTRIBUTE_PREFIX_VALUE;
    // start - UNIT_ATTRIBUTE_MULTIPLIER_VALUE
    libcellml::Issue::ReferenceRule::UNIT_ATTRIBUTE_MULTIPLIER_VALUE;
    // start - UNIT_ATTRIBUTE_EXPONENT_VALUE
    libcellml::Issue::ReferenceRule::UNIT_ATTRIBUTE_EXPONENT_VALUE;
    // start - COMPONENT_ELEMENT
    libcellml::Issue::ReferenceRule::COMPONENT_ELEMENT;
    // start - COMPONENT_NAME
    libcellml::Issue::ReferenceRule::COMPONENT_NAME;
    // start - COMPONENT_NAME_VALUE
    libcellml::Issue::ReferenceRule::COMPONENT_NAME_VALUE;
    // start - COMPONENT_NAME_UNIQUE
    libcellml::Issue::ReferenceRule::COMPONENT_NAME_UNIQUE;
    // start - COMPONENT_CHILD
    libcellml::Issue::ReferenceRule::COMPONENT_CHILD;
    // start - VARIABLE_ELEMENT
    libcellml::Issue::ReferenceRule::VARIABLE_ELEMENT;
    // start - VARIABLE_ATTRIBUTE_REQUIRED
    libcellml::Issue::ReferenceRule::VARIABLE_ATTRIBUTE_REQUIRED;
    // start - VARIABLE_NAME_VALUE
    libcellml::Issue::ReferenceRule::VARIABLE_NAME_VALUE;
    // start - VARIABLE_NAME_UNIQUE
    libcellml::Issue::ReferenceRule::VARIABLE_NAME_UNIQUE;
    // start - VARIABLE_UNITS_VALUE
    libcellml::Issue::ReferenceRule::VARIABLE_UNITS_VALUE;
    // start - VARIABLE_ATTRIBUTE_OPTIONAL
    libcellml::Issue::ReferenceRule::VARIABLE_ATTRIBUTE_OPTIONAL;
    // start - VARIABLE_INTERFACE_VALUE
    libcellml::Issue::ReferenceRule::VARIABLE_INTERFACE_VALUE;
    // start - VARIABLE_INITIAL_VALUE_VALUE
    libcellml::Issue::ReferenceRule::VARIABLE_INITIAL_VALUE_VALUE;
    // start - RESET_ELEMENT
    libcellml::Issue::ReferenceRule::RESET_ELEMENT;
    // start - RESET_ATTRIBUTE_REQUIRED
    libcellml::Issue::ReferenceRule::RESET_ATTRIBUTE_REQUIRED;
    // start - RESET_VARIABLE_REFERENCE
    libcellml::Issue::ReferenceRule::RESET_VARIABLE_REFERENCE;
    // start - RESET_TEST_VARIABLE_REFERENCE
    libcellml::Issue::ReferenceRule::RESET_TEST_VARIABLE_REFERENCE;
    // start - RESET_ORDER_VALUE
    libcellml::Issue::ReferenceRule::RESET_ORDER_VALUE;
    // start - RESET_ORDER_UNIQUE
    libcellml::Issue::ReferenceRule::RESET_ORDER_UNIQUE;
    // start - RESET_CHILD
    libcellml::Issue::ReferenceRule::RESET_CHILD;
    // start - RESET_RESET_VALUE_CHILD
    libcellml::Issue::ReferenceRule::RESET_RESET_VALUE_CHILD;
    // start - RESET_TEST_VALUE_CHILD
    libcellml::Issue::ReferenceRule::RESET_TEST_VALUE_CHILD;
    // start - TEST_VALUE_ELEMENT
    libcellml::Issue::ReferenceRule::TEST_VALUE_ELEMENT;
    // start - TEST_VALUE_CHILD
    libcellml::Issue::ReferenceRule::TEST_VALUE_CHILD;
    // start - RESET_VALUE_ELEMENT
    libcellml::Issue::ReferenceRule::RESET_VALUE_ELEMENT;
    // start - RESET_VALUE_CHILD
    libcellml::Issue::ReferenceRule::RESET_VALUE_CHILD;
    // start - MATH_ELEMENT
    libcellml::Issue::ReferenceRule::MATH_ELEMENT;
    // start - MATH_MATHML
    libcellml::Issue::ReferenceRule::MATH_MATHML;
    // start - MATH_CHILD
    libcellml::Issue::ReferenceRule::MATH_CHILD;
    // start - MATH_CI_VARIABLE_REFERENCE
    libcellml::Issue::ReferenceRule::MATH_CI_VARIABLE_REFERENCE;
    // start - MATH_CN_UNITS_ATTRIBUTE
    libcellml::Issue::ReferenceRule::MATH_CN_UNITS_ATTRIBUTE;
    // start - MATH_CN_UNITS_ATTRIBUTE_REFERENCE
    libcellml::Issue::ReferenceRule::MATH_CN_UNITS_ATTRIBUTE_REFERENCE;
    // start - MATH_CN_BASE10
    libcellml::Issue::ReferenceRule::MATH_CN_BASE10;
    // start - MATH_CN_FORMAT
    libcellml::Issue::ReferenceRule::MATH_CN_FORMAT;
    // start - ENCAPSULATION_ELEMENT
    libcellml::Issue::ReferenceRule::ENCAPSULATION_ELEMENT;
    // start - ENCAPSULATION_CHILD
    libcellml::Issue::ReferenceRule::ENCAPSULATION_CHILD;
    // start - COMPONENT_REF_ELEMENT
    libcellml::Issue::ReferenceRule::COMPONENT_REF_ELEMENT;
    // start - COMPONENT_REF_COMPONENT_ATTRIBUTE
    libcellml::Issue::ReferenceRule::COMPONENT_REF_COMPONENT_ATTRIBUTE;
    // start - COMPONENT_REF_COMPONENT_ATTRIBUTE_REFERENCE
    libcellml::Issue::ReferenceRule::COMPONENT_REF_COMPONENT_ATTRIBUTE_REFERENCE;
    // start - COMPONENT_REF_COMPONENT_ATTRIBUTE_UNIQUE
    libcellml::Issue::ReferenceRule::COMPONENT_REF_COMPONENT_ATTRIBUTE_UNIQUE;
    // start - COMPONENT_REF_CHILD
    libcellml::Issue::ReferenceRule::COMPONENT_REF_CHILD;
    // start - CONNECTION_ELEMENT
    libcellml::Issue::ReferenceRule::CONNECTION_ELEMENT;
    // start - CONNECTION_COMPONENT1_ATTRIBUTE
    libcellml::Issue::ReferenceRule::CONNECTION_COMPONENT1_ATTRIBUTE;
    // start - CONNECTION_COMPONENT1_ATTRIBUTE_REFERENCE
    libcellml::Issue::ReferenceRule::CONNECTION_COMPONENT1_ATTRIBUTE_REFERENCE;
    // start - CONNECTION_COMPONENT2_ATTRIBUTE
    libcellml::Issue::ReferenceRule::CONNECTION_COMPONENT2_ATTRIBUTE;
    // start - CONNECTION_COMPONENT2_ATTRIBUTE_REFERENCE
    libcellml::Issue::ReferenceRule::CONNECTION_COMPONENT2_ATTRIBUTE_REFERENCE;
    // start - CONNECTION_EXCLUDE_SELF
    libcellml::Issue::ReferenceRule::CONNECTION_EXCLUDE_SELF;
    // start - CONNECTION_UNIQUE
    libcellml::Issue::ReferenceRule::CONNECTION_UNIQUE;
    // start - CONNECTION_CHILD
    libcellml::Issue::ReferenceRule::CONNECTION_CHILD;
    // start - MAP_VARIABLES_ELEMENT
    libcellml::Issue::ReferenceRule::MAP_VARIABLES_ELEMENT;
    // start - MAP_VARIABLES_VARIABLE1_ATTRIBUTE
    libcellml::Issue::ReferenceRule::MAP_VARIABLES_VARIABLE1_ATTRIBUTE;
    // start - MAP_VARIABLES_VARIABLE1_ATTRIBUTE_REFERENCE
    libcellml::Issue::ReferenceRule::MAP_VARIABLES_VARIABLE1_ATTRIBUTE_REFERENCE;
    // start - MAP_VARIABLES_VARIABLE2_ATTRIBUTE
    libcellml::Issue::ReferenceRule::MAP_VARIABLES_VARIABLE2_ATTRIBUTE;
    // start - MAP_VARIABLES_VARIABLE2_ATTRIBUTE_REFERENCE
    libcellml::Issue::ReferenceRule::MAP_VARIABLES_VARIABLE2_ATTRIBUTE_REFERENCE;
    // start - MAP_VARIABLES_UNIQUE
    libcellml::Issue::ReferenceRule::MAP_VARIABLES_UNIQUE;
    // start - DATA_REPR_IDENTIFIER_AT_LEAST_ONE_ALPHANUM
    libcellml::Issue::ReferenceRule::DATA_REPR_IDENTIFIER_AT_LEAST_ONE_ALPHANUM;
    // start - DATA_REPR_IDENTIFIER_BEGIN_EURO_NUM
    libcellml::Issue::ReferenceRule::DATA_REPR_IDENTIFIER_BEGIN_EURO_NUM;
    // start - DATA_REPR_IDENTIFIER_LATIN_ALPHANUM
    libcellml::Issue::ReferenceRule::DATA_REPR_IDENTIFIER_LATIN_ALPHANUM;
    // end - SPECIFICATION_ISSUES_END

    //      Go and have a cuppa; you're done!
    return 0;
}
