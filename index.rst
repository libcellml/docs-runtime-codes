.. _runtime_codes_index:

=============
Runtime Codes
=============

List of all the runtime codes that can be returned by libCellML when using the API, and their meaning.

Many of the classes in libCellML inherit a :code:`Logger` class, which keeps track of things that may have gone wrong, as well as giving hints when the behaviour may not be as expected.
This page keeps a list of the codes that are not related to CellML syntactic validation.

Issues related to validation are directed to the relevant section in the :cellml2:`CellML 2.0 Normative Specification document<>` instead, and are listed at the bottom of this page for completeness.

Analyser codes
==============

.. _ANALYSER_EQUATION_NOT_EQUALITY_STATEMENT:

.. container:: issue-code
    
   .. include:: runtime_codes.cpp
      :start-after: // start - ANALYSER_EQUATION_NOT_EQUALITY_STATEMENT
      :end-before: // start - ANALYSER_UNITS

.. _ANALYSER_UNITS:

.. container:: issue-code
    
   .. include:: runtime_codes.cpp
      :start-after: // start - ANALYSER_UNITS
      :end-before: // start - ANALYSER_UNLINKED_UNITS


.. _ANALYSER_UNLINKED_UNITS:

.. container:: issue-code
   
   .. include:: runtime_codes.cpp
      :start-after: // start - ANALYSER_UNLINKED_UNITS
      :end-before: // start - ANALYSER_VARIABLE_INITIALISED_MORE_THAN_ONCE

.. _ANALYSER_VARIABLE_INITIALISED_MORE_THAN_ONCE:

.. container:: issue-code
    
   .. include:: runtime_codes.cpp
      :start-after: // start - ANALYSER_VARIABLE_INITIALISED_MORE_THAN_ONCE
      :end-before: // start - ANALYSER_VARIABLE_INITIALISED_USING_ALGEBRAIC_VARIABLE

.. _ANALYSER_VARIABLE_INITIALISED_USING_ALGEBRAIC_VARIABLE:

.. container:: issue-code
    
   .. include:: runtime_codes.cpp
      :start-after: // start - ANALYSER_VARIABLE_INITIALISED_USING_ALGEBRAIC_VARIABLE
      :end-before: // start - ANALYSER_VARIABLE_INITIALISED_USING_VARIABLE_WITH_DIFFERENT_UNITS

.. _ANALYSER_VARIABLE_INITIALISED_USING_VARIABLE_WITH_DIFFERENT_UNITS:

.. container:: issue-code
    
   .. include:: runtime_codes.cpp
      :start-after: // start - ANALYSER_VARIABLE_INITIALISED_USING_VARIABLE_WITH_DIFFERENT_UNITS
      :end-before: // start - ANALYSER_VOI_INITIALISED

.. _ANALYSER_VOI_INITIALISED:

.. container:: issue-code
    
   .. include:: runtime_codes.cpp
      :start-after: // start - ANALYSER_VOI_INITIALISED
      :end-before: // start - ANALYSER_VOI_SEVERAL

.. _ANALYSER_VOI_SEVERAL:

.. container:: issue-code
    
   .. include:: runtime_codes.cpp
      :start-after: // start - ANALYSER_VOI_SEVERAL
      :end-before: // start - ANALYSER_ODE_NOT_FIRST_ORDER

.. _ANALYSER_ODE_NOT_FIRST_ORDER:

.. container:: issue-code
    
   .. include:: runtime_codes.cpp
      :start-after: // start - ANALYSER_ODE_NOT_FIRST_ORDER
      :end-before: // start - ANALYSER_VARIABLE_UNUSED

.. _ANALYSER_VARIABLE_UNUSED:

.. container:: issue-code
    
   .. include:: runtime_codes.cpp
      :start-after: // start - ANALYSER_VARIABLE_UNUSED
      :end-before: // start - ANALYSER_STATE_NOT_INITIALISED

.. _ANALYSER_STATE_NOT_INITIALISED:

.. container:: issue-code
    
   .. include:: runtime_codes.cpp
      :start-after: // start - ANALYSER_STATE_NOT_INITIALISED
      :end-before: // start - ANALYSER_STATE_RATE_AS_ALGEBRAIC_VARIABLE

.. _ANALYSER_STATE_RATE_AS_ALGEBRAIC_VARIABLE:

.. container:: issue-code
    
   .. include:: runtime_codes.cpp
      :start-after: // start - ANALYSER_STATE_RATE_AS_ALGEBRAIC_VARIABLE
      :end-before: // start - ANALYSER_VARIABLE_UNDERCONSTRAINED

.. _ANALYSER_VARIABLE_UNDERCONSTRAINED:

.. container:: issue-code
    
   .. include:: runtime_codes.cpp
      :start-after: // start - ANALYSER_VARIABLE_UNDERCONSTRAINED
      :end-before: // start - ANALYSER_VARIABLE_OVERCONSTRAINED

.. _ANALYSER_VARIABLE_OVERCONSTRAINED:

.. container:: issue-code
    
   .. include:: runtime_codes.cpp
      :start-after: // start - ANALYSER_VARIABLE_OVERCONSTRAINED
      :end-before: // start - ANALYSER_EXTERNAL_VARIABLE_DIFFERENT_MODEL

.. _ANALYSER_EXTERNAL_VARIABLE_DIFFERENT_MODEL:

.. container:: issue-code
    
   .. include:: runtime_codes.cpp
      :start-after: // start - ANALYSER_EXTERNAL_VARIABLE_DIFFERENT_MODEL
      :end-before: // start - ANALYSER_EXTERNAL_VARIABLE_VOI

.. _ANALYSER_EXTERNAL_VARIABLE_VOI:

.. container:: issue-code
    
   .. include:: runtime_codes.cpp
      :start-after: // start - ANALYSER_EXTERNAL_VARIABLE_VOI
      :end-before: // start - ANALYSER_EXTERNAL_VARIABLE_USE_PRIMARY_VARIABLE

.. _ANALYSER_EXTERNAL_VARIABLE_USE_PRIMARY_VARIABLE:

.. container:: issue-code
    
   .. include:: runtime_codes.cpp
      :start-after: // start - ANALYSER_EXTERNAL_VARIABLE_USE_PRIMARY_VARIABLE
      :end-before: // end - ANALYSER_ISSUES_END

Annotator codes
===============

.. _ANNOTATOR_NO_MODEL:

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - ANNOTATOR_NO_MODEL
      :end-before: // start - ANNOTATOR_INCONSISTENT_TYPE

The :code:`Annotator` class needs a :code:`Model` item on which to operate.
If you're seeing an issue with this code, it's because you need to use the :code:`setModel` function to add it.

.. container:: shortlist

    **API** :api:`Annotator::setModel function<Annotator?fName=setModel>`

    **How-to** :howto:`Annotate a model <annotate_model>`

    **Common use case** :usecases:`Annotation tool developer <annotation_tool_dev>`
        

.. _ANNOTATOR_NULL_MODEL:

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - ANNOTATOR_NULL_MODEL
      :end-before: // end - ANNOTATOR_ISSUES_END

This code is generated when the :code:`Annotator` is given a null pointer instead of a :code:`Model` item.

.. container:: shortlist

    **API** :api:`Annotator::setModel function<Annotator?fName=setModel>`

    **How-to** :howto:`Annotate a model <annotate_model>`

    **Tutorial** :tutorial:`Tutorial 5: Annotation<5>`

    **Common use case** :usecases:`Annotation tool developer <annotation_tool_dev>`


.. _ANNOTATOR_ID_NOT_FOUND:

.. container:: issue-code
    
   .. include:: runtime_codes.cpp
      :start-after: // start - ANNOTATOR_ID_NOT_FOUND
      :end-before: // start - ANNOTATOR_ID_NOT_UNIQUE

When the :code:`Model` that was submitted to this :code:`Annotator` does not have any item with the requested id string, a warning with this code is created.

.. container:: shortlist

    **API** :api:`Annotator::item function<Annotator?fName=item>` (or any of the type-specific retrieval functions)

    **How-to** :howto:`Annotate a model <annotate_model>`

    **Tutorial** :tutorial:`Tutorial 5: Annotation <5>`

    **Common use case** :usecases:`Annotation tool developer <annotation_tool_dev>`

.. container:: nb

    Please note that currently the :code:`Annotator` class does not check for ids within MathML strings.
    

.. _ANNOTATOR_ID_NOT_UNIQUE:

.. container:: issue-code
    
   .. include:: runtime_codes.cpp
      :start-after: // start - ANNOTATOR_ID_NOT_UNIQUE
      :end-before: // start - ANNOTATOR_NO_MODEL 

While the :code:`Annotator` is able to retrieve and manipulate collections of items with the same id, any XML document with duplicated ids is not valid.  
When non-unique id strings are encountered, a warning with this code is created.

.. container:: shortlist

    **How-to** :howto:`Annotate a model <annotate_model>`

    **Tutorial** :tutorial:`Tutorial 5: Annotation<5>`

    **Common use case** :usecases:`Handle duplicated ID attributes <annotation_tool_dev#handle-duplicated-id-attributes>`

    **Common use case** :usecases:`Annotation tool developer <annotation_tool_dev>`


.. _ANNOTATOR_INCONSISTENT_TYPE:

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - ANNOTATOR_INCONSISTENT_TYPE
      :end-before: // end - ANNOTATOR_ISSUES_END

In contrast to all other classes in libCellML, the :code:`Annotator` must be agnostic as to the type of item it deals with.
It uses :code:`AnyItem` type in order to be able to return items without specifying their type ahead of time.
An error is issued when the information stored in an :code:`AnyItem` item (the :code:`CellmlElementType` of the item, and the item itself) are not consistent.

This issue is raised when attempting to use the automatic id feature of the :code:`Annotator`, and can be rectified by checking that any manually created :code:`AnyItem` items have the correct pairing of :code:`CellmlElementType` and object.
The expected pairings are shown below.

.. table::

    ===================== ====================
    CellmlElementType     libCellML class
    ===================== ====================
    :code:`COMPONENT`     :code:`Component`
    :code:`COMPONENT_REF` :code:`Component`
    :code:`CONNECTION`    :code:`VariablePair`
    :code:`ENCAPSULATION` :code:`Model`
    :code:`IMPORT`        :code:`ImportSource`
    :code:`MAP_VARIABLES` :code:`VariablePair`
    :code:`MODEL`         :code:`Model`
    :code:`RESET`         :code:`Reset`
    :code:`RESET_VALUE`   :code:`Reset`
    :code:`TEST_VALUE`    :code:`Reset`
    :code:`UNIT`          :code:`Unit`
    :code:`UNITS`         :code:`Units`
    :code:`VARIABLE`      :code:`Variable`
    ===================== ====================


Importer codes
==============

For complete descriptions of all aspects of the :code:`Importer`, please see the tutorials and examples available at the :usecases:`Import debugger <import_debugger>` page.

.. _IMPORTER_ERROR_IMPORTING_UNITS:

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - IMPORTER_ERROR_IMPORTING_UNITS
      :end-before: // start - IMPORTER_MISSING_FILE

The :code:`Importer` will return this code if an import reference for an imported component is not found in the specified model.
The issue's description will note the URL of the model in question. 

.. container:: shortlist 

    To debug:

      - check the units names available in the imported model using :api:`Model::units(index)<Model?fName=units>` on the model at the URL, and use the :api:`ImportSource::importReference()<ImportSource?fName=importReference>` function to check the currently specified reference.
      - use the :api:`ImportSource::setImportReference()<ImportSource?fName=setImportReference>` function to amend the reference.

.. _IMPORTER_MISSING_FILE:

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - IMPORTER_MISSING_FILE
      :end-before: // start - IMPORTER_MISSING_COMPONENT

The :code:`Importer` will return this code if it cannot locate or open an imported file.
You can check the specified locations using the :api:`ImportSource::url() function <ImportSource?fName=url>` for the imported items in your model.

.. container:: shortlist

    **API** :api:`ImportSource::url()<ImportSource?fName=url>`, :api:`ImportSource::setUrl()<ImportSource?fName=setUrl>`

    **Common use case** :usecases:`Import debugger <import_debugger>`

    **Tutorial** :hh_tutorial:`Hodgkin-Huxley Tutorial 2<2>`

.. container:: nb

    Be aware that since imports can have many generations, the error may not be in your first level model.
    The description returned with this error will identify the model of interest.

.. _IMPORTER_MISSING_COMPONENT:

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - IMPORTER_MISSING_COMPONENT
      :end-before: // start - IMPORTER_MISSING_UNITS

The :code:`Importer` will return this code if an import reference for an imported component is not found in the specified model.
The issue's description will note the URL of the model in question.  

.. container:: shortlist 

    To debug:
    
    - check the component names available in the imported model using :api:`Model::units(index)<Model?fName=units>` on the model at the URL;
    - use the :api:`ImportSource::importReference()<ImportSource?fName=importReference>` function to check the currently specified reference;
    - use the :api:`ImportSource::setImportReference()<ImportSource?fName=setImportReference>` function to amend the reference. 

.. container:: shortlist

    **API** :api:`ImportSource::importReference()<ImportSource?fName=importReference>`, :api:`ImportSource::setImportReference()<ImportSource?fName=setImportReference>`

    **Common use case** :usecases:`Import debugger <import_debugger>`

.. _IMPORTER_MISSING_UNITS:

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - IMPORTER_MISSING_UNITS
      :end-before: // start - IMPORTER_NULL_MODEL

The :code:`Importer` will return this code if an import reference for an imported units item is not found in the specified model.
The issue's description will note the URL of the model in question.

.. container:: shortlist 

    To debug:

    - check the units names available in the imported model using :api:`Model::units(index)<Model?fName=units>` on the model at the URL;
    - use the :api:`ImportSource::importReference()<ImportSource?fName=importReference>` function to check the currently specified reference;
    - use the :api:`ImportSource::setImportReference()<ImportSource?fName=setImportReference>` function to amend the reference. 

.. container:: shortlist

    **API** :api:`ImportSource::importReference()<ImportSource?fName=importReference>`, :api:`ImportSource::setImportReference()<ImportSource?fName=setImportReference>`

    **Common use case** :usecases:`Import debugger <import_debugger>`

.. _IMPORTER_NULL_MODEL:

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - IMPORTER_NULL_MODEL
      :end-before: // start - IMPORTER_UNDEFINED_MODEL

When the :code:`Importer` attempts to resolve the imports in a model for flattening, but encounters an :code:`ImportSource` whose associated :code:`Model` is missing, this code is returned.
This situation can be caused by changing any of the import sources or their references after a model has been added to the importer.

.. container:: shortlist

    **API** :api:`Importer::flattenModel<Importer?fName=flattenModel>`

    **How-to** :howto:`Resolve imports <resolve_imports>`

    **Common use case** :usecases:`Import debugger <import_debugger>`

.. _IMPORTER_UNDEFINED_MODEL:

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - IMPORTER_UNDEFINED_MODEL
      :end-before: // start - IMPORTER_UNRESOLVED_IMPORTS

The :code:`Importer` will return this code if it attempts to flatten a model, but :code:`isDefined()` returns false for the associated :code:`Model`.

.. container:: shortlist

    **API** :api:`Importer::flattenModel<Importer?fName=flattenModel>`

.. _IMPORTER_UNRESOLVED_IMPORTS:

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - IMPORTER_UNRESOLVED_IMPORTS
      :end-before: // end - IMPORTER_ISSUES_END

The :code:`Importer` will return this code if it attempts to flatten a model, but some of the imports in the model have unresolved imports.

.. container:: shortlist

    **API** :api:`Importer::flattenModel<Importer?fName=flattenModel>`

Parser codes
============
All codes returned by the :code:`Parser` are related to syntax, and covered in the :ref:`section below<syntax_validation>`.

Printer codes
=============
At present, the :code:`Printer` class does not return any issue codes.

Miscellaneous codes
===================

.. _INVALID_ARGUMENT:

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - MISCELLANEOUS_ISSUES
      :end-before: // end - MISCELLANEOUS_ISSUES_END

This is a general code used by the :code:`Importer` and :code:`Validator` classes when the argument given is null.

.. container:: shortlist

    **API** :api:`Validator::validateModel<Validator?fName=validateModel>`, :api:`Importer::flattenModel<Importer?fName=flattenModel>`.

Generator codes
===============

.. _GENERATOR_NULL_MODEL:

.. container:: issue-code
    
   .. include:: runtime_codes.cpp
      :start-after: // start - GENERATOR_NULL_MODEL
      :end-before: // start - GENERATOR_NULL_VARIABLE

.. _GENERATOR_NULL_VARIABLE:

.. container:: issue-code
    
   .. include:: runtime_codes.cpp
      :start-after: // start - GENERATOR_NULL_VARIABLE
      :end-before: // start - GENERATOR_VOI_VARIABLE_ALWAYS_TRACKED

.. _GENERATOR_VOI_VARIABLE_ALWAYS_TRACKED:

.. container:: issue-code
    
   .. include:: runtime_codes.cpp
      :start-after: // start - GENERATOR_VOI_VARIABLE_ALWAYS_TRACKED
      :end-before: // start - GENERATOR_VOI_VARIABLE_NOT_UNTRACKABLE

.. _GENERATOR_VOI_VARIABLE_NOT_UNTRACKABLE:

.. container:: issue-code
    
   .. include:: runtime_codes.cpp
      :start-after: // start - GENERATOR_VOI_VARIABLE_NOT_UNTRACKABLE
      :end-before: // start - GENERATOR_STATE_VARIABLE_ALWAYS_TRACKED

.. _GENERATOR_STATE_VARIABLE_ALWAYS_TRACKED:

.. container:: issue-code
    
   .. include:: runtime_codes.cpp
      :start-after: // start - GENERATOR_STATE_VARIABLE_ALWAYS_TRACKED
      :end-before: // start - GENERATOR_STATE_VARIABLE_NOT_UNTRACKABLE

.. _GENERATOR_STATE_VARIABLE_NOT_UNTRACKABLE:

.. container:: issue-code
    
   .. include:: runtime_codes.cpp
      :start-after: // start - GENERATOR_STATE_VARIABLE_NOT_UNTRACKABLE
      :end-before: // start - GENERATOR_EXTERNAL_VARIABLE_ALWAYS_TRACKED

.. _GENERATOR_EXTERNAL_VARIABLE_ALWAYS_TRACKED:

.. container:: issue-code
    
   .. include:: runtime_codes.cpp
      :start-after: // start - GENERATOR_EXTERNAL_VARIABLE_ALWAYS_TRACKED
      :end-before: // start - GENERATOR_EXTERNAL_VARIABLE_NOT_UNTRACKABLE

.. _GENERATOR_EXTERNAL_VARIABLE_NOT_UNTRACKABLE:

.. container:: issue-code
    
   .. include:: runtime_codes.cpp
      :start-after: // start - GENERATOR_EXTERNAL_VARIABLE_NOT_UNTRACKABLE
      :end-before: // start - GENERATOR_NLA_BASED_VARIABLE_ALWAYS_TRACKED

.. _GENERATOR_NLA_BASED_VARIABLE_ALWAYS_TRACKED:

.. container:: issue-code
    
   .. include:: runtime_codes.cpp
      :start-after: // start - GENERATOR_NLA_BASED_VARIABLE_ALWAYS_TRACKED
      :end-before: // start - GENERATOR_NLA_BASED_VARIABLE_NOT_UNTRACKABLE

.. _GENERATOR_NLA_BASED_VARIABLE_NOT_UNTRACKABLE:

.. container:: issue-code
    
   .. include:: runtime_codes.cpp
      :start-after: // start - GENERATOR_NLA_BASED_VARIABLE_NOT_UNTRACKABLE
      :end-before: // start - GENERATOR_EXTERNALLY_NEEDED_VARIABLE_ALWAYS_TRACKED

.. _GENERATOR_EXTERNALLY_NEEDED_VARIABLE_ALWAYS_TRACKED:

.. container:: issue-code
    
   .. include:: runtime_codes.cpp
      :start-after: // start - GENERATOR_EXTERNALLY_NEEDED_VARIABLE_ALWAYS_TRACKED
      :end-before: // start - GENERATOR_EXTERNALLY_NEEDED_VARIABLE_NOT_UNTRACKABLE

.. _GENERATOR_EXTERNALLY_NEEDED_VARIABLE_NOT_UNTRACKABLE:

.. container:: issue-code
    
   .. include:: runtime_codes.cpp
      :start-after: // start - GENERATOR_EXTERNALLY_NEEDED_VARIABLE_NOT_UNTRACKABLE
      :end-before: // end - GENERATOR_ISSUES_END

.. _syntax_validation:

Codes related to syntactic validation
=====================================
The codes below are returned from the :code:`Validator` as well as the :code:`Parser` classes. 
The documentation is located on the :cellml2:`CellML 2.0 specification pages<>`, with examples and extra explanations under the "See more" blocks there.

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - XML
      :end-before: // start - XML_UNEXPECTED_ELEMENT
    
See :cellml2:`Section 1.2.1.1<reference/formal_and_informative/specA02.html?issue=XML>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - XML_UNEXPECTED_ELEMENT
      :end-before: // start - XML_UNEXPECTED_CHARACTER

See :cellml2:`Section 1.2.2.2<reference/formal_and_informative/specA02.html?issue=XML_UNEXPECTED_ELEMENT>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - XML_UNEXPECTED_CHARACTER
      :end-before: // start - XML_UNEXPECTED_NAMESPACE

See :cellml2:`Section 1.2.3.2<reference/formal_and_informative/specA02.html?issue=XML_UNEXPECTED_CHARACTER>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - XML_UNEXPECTED_NAMESPACE
      :end-before: // start - XML_ATTRIBUTE_HAS_NAMESPACE

See :cellml2:`Section 1.2.4.1<reference/formal_and_informative/specA02.html?issue=XML_UNEXPECTED_NAMESPACE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - XML_ATTRIBUTE_HAS_NAMESPACE
      :end-before: // start - XML_ID_ATTRIBUTE

See :cellml2:`Section 1.2.4.2<reference/formal_and_informative/specA02.html?issue=XML_ATTRIBUTE_HAS_NAMESPACE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - XML_ID_ATTRIBUTE
      :end-before: // start - MODEL_ELEMENT

See :cellml2:`Section 1.2.5.1.1<reference/formal_and_informative/specA02.html?issue=XML_ID_ATTRIBUTE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - MODEL_ELEMENT
      :end-before: // start - MODEL_NAME

See :cellml2:`Section 2.1<reference/formal_and_informative/specB01.html?issue=MODEL_ELEMENT>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - MODEL_NAME
      :end-before: // start - MODEL_NAME_VALUE

See :cellml2:`Section 2.1.1<reference/formal_and_informative/specB01.html?issue=MODEL_NAME>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - MODEL_NAME_VALUE
      :end-before: // start - MODEL_CHILD

See :cellml2:`Section 2.1.1.1<reference/formal_and_informative/specB01.html?issue=MODEL_NAME_VALUE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - MODEL_CHILD
      :end-before: // start - MODEL_MORE_THAN_ONE_ENCAPSULATION

See :cellml2:`Section 2.1.2<reference/formal_and_informative/specB01.html?issue=MODEL_CHILD>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - MODEL_MORE_THAN_ONE_ENCAPSULATION
      :end-before: // start - IMPORT_ELEMENT

See :cellml2:`Section 2.1.3<reference/formal_and_informative/specB01.html?issue=MODEL_MORE_THAN_ONE_ENCAPSULATION>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - IMPORT_ELEMENT
      :end-before: // start - IMPORT_HREF

See :cellml2:`Section 2.2<reference/formal_and_informative/specB02.html?issue=IMPORT_ELEMENT>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - IMPORT_HREF
      :end-before: // start - IMPORT_HREF_LOCATOR

See :cellml2:`Section 2.2.1<reference/formal_and_informative/specB02.html?issue=IMPORT_HREF>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - IMPORT_HREF_LOCATOR
      :end-before: // start - IMPORT_CHILD

See :cellml2:`Section 2.2.1.1<reference/formal_and_informative/specB02.html?issue=IMPORT_HREF_LOCATOR>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - IMPORT_CHILD
      :end-before: // start - IMPORT_EQUIVALENT_INFOSET

See :cellml2:`Section 2.2.2<reference/formal_and_informative/specB02.html?issue=IMPORT_CHILD>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - IMPORT_EQUIVALENT_INFOSET
      :end-before: // start - IMPORT_UNITS_ELEMENT

See :cellml2:`Section 2.2.3<reference/formal_and_informative/specB02.html?issue=IMPORT_EQUIVALENT_INFOSET>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - IMPORT_UNITS_ELEMENT
      :end-before: // start - IMPORT_UNITS_NAME

See :cellml2:`Section 2.3<reference/formal_and_informative/specB03.html?issue=IMPORT_UNITS_ELEMENT>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - IMPORT_UNITS_NAME
      :end-before: // start - IMPORT_UNITS_NAME_VALUE

See :cellml2:`Section 2.3.1<reference/formal_and_informative/specB03.html?issue=IMPORT_UNITS_NAME>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - IMPORT_UNITS_NAME_VALUE
      :end-before: // start - IMPORT_UNITS_NAME_UNIQUE

See :cellml2:`Section 2.3.1.1<reference/formal_and_informative/specB03.html?issue=IMPORT_UNITS_NAME_VALUE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - IMPORT_UNITS_NAME_UNIQUE
      :end-before: // start - IMPORT_UNITS_UNITS_REFERENCE

See :cellml2:`Section 2.3.1.2<reference/formal_and_informative/specB03.html?issue=IMPORT_UNITS_NAME_UNIQUE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - IMPORT_UNITS_UNITS_REFERENCE
      :end-before: // start - IMPORT_UNITS_UNITS_REFERENCE_VALUE

See :cellml2:`Section 2.3.2<reference/formal_and_informative/specB03.html?issue=IMPORT_UNITS_UNITS_REFERENCE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - IMPORT_UNITS_UNITS_REFERENCE_VALUE
      :end-before: // start - IMPORT_UNITS_UNITS_REFERENCE_VALUE_TARGET

See :cellml2:`Section 2.3.2.1<reference/formal_and_informative/specB03.html?issue=IMPORT_UNITS_UNITS_REFERENCE_VALUE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - IMPORT_UNITS_UNITS_REFERENCE_VALUE_TARGET
      :end-before: // start - IMPORT_COMPONENT_ELEMENT

See :cellml2:`Section 2.3.2.2<reference/formal_and_informative/specB03.html?issue=IMPORT_UNITS_UNITS_REFERENCE_VALUE_TARGET>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - IMPORT_COMPONENT_ELEMENT
      :end-before: // start - IMPORT_COMPONENT_NAME

See :cellml2:`Section 2.4<reference/formal_and_informative/specB04.html?issue=IMPORT_COMPONENT_ELEMENT>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - IMPORT_COMPONENT_NAME
      :end-before: // start - IMPORT_COMPONENT_NAME_VALUE

See :cellml2:`Section 2.4.1<reference/formal_and_informative/specB04.html?issue=IMPORT_COMPONENT_NAME>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - IMPORT_COMPONENT_NAME_VALUE
      :end-before: // start - IMPORT_COMPONENT_NAME_UNIQUE

See :cellml2:`Section 2.4.1.1<reference/formal_and_informative/specB04.html?issue=IMPORT_COMPONENT_NAME_VALUE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - IMPORT_COMPONENT_NAME_UNIQUE
      :end-before: // start - IMPORT_COMPONENT_COMPONENT_REFERENCE

See :cellml2:`Section 2.4.1.2<reference/formal_and_informative/specB04.html?issue=IMPORT_COMPONENT_NAME_UNIQUE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - IMPORT_COMPONENT_COMPONENT_REFERENCE
      :end-before: // start - IMPORT_COMPONENT_COMPONENT_REFERENCE_VALUE

See :cellml2:`Section 2.4.2<reference/formal_and_informative/specB04.html?issue=IMPORT_COMPONENT_COMPONENT_REFERENCE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - IMPORT_COMPONENT_COMPONENT_REFERENCE_VALUE
      :end-before: // start - IMPORT_COMPONENT_COMPONENT_REFERENCE_TARGET

See :cellml2:`Section 2.4.2.1<reference/formal_and_informative/specB04.html?issue=IMPORT_COMPONENT_COMPONENT_REFERENCE_VALUE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - IMPORT_COMPONENT_COMPONENT_REFERENCE_TARGET
      :end-before: // start - UNITS_ELEMENT

See :cellml2:`Section 2.4.2.2<reference/formal_and_informative/specB04.html?issue=IMPORT_COMPONENT_COMPONENT_REFERENCE_TARGET>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - UNITS_ELEMENT
      :end-before: // start - UNITS_NAME

See :cellml2:`Section 2.5<reference/formal_and_informative/specB05.html?issue=UNITS_ELEMENT>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - UNITS_NAME
      :end-before: // start - UNITS_NAME_VALUE

See :cellml2:`Section 2.5.1<reference/formal_and_informative/specB05.html?issue=UNITS_NAME>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - UNITS_NAME_VALUE
      :end-before: // start - UNITS_NAME_UNIQUE

See :cellml2:`Section 2.5.1.1<reference/formal_and_informative/specB05.html?issue=UNITS_NAME_VALUE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - UNITS_NAME_UNIQUE
      :end-before: // start - UNITS_STANDARD

See :cellml2:`Section 2.5.1.2<reference/formal_and_informative/specB05.html?issue=UNITS_NAME_UNIQUE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - UNITS_STANDARD
      :end-before: // start - UNITS_CHILD

See :cellml2:`Section 2.5.2<reference/formal_and_informative/specB05.html?issue=UNITS_STANDARD>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - UNITS_CHILD
      :end-before: // start - UNIT_ELEMENT

See :cellml2:`Section 2.5.3<reference/formal_and_informative/specB05.html?issue=UNITS_CHILD>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - UNIT_ELEMENT
      :end-before: // start - UNIT_UNITS

See :cellml2:`Section 2.6<reference/formal_and_informative/specB06.html?issue=UNIT_ELEMENT>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - UNIT_UNITS
      :end-before: // start - UNIT_UNITS_REFERENCE

See :cellml2:`Section 2.6.1<reference/formal_and_informative/specB06.html?issue=UNIT_UNITS>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - UNIT_UNITS_REFERENCE
      :end-before: // start - UNIT_UNITS_CIRCULAR_REFERENCE

See :cellml2:`Section 2.6.1.1<reference/formal_and_informative/specB06.html?issue=UNIT_UNITS_REFERENCE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - UNIT_UNITS_CIRCULAR_REFERENCE
      :end-before: // start - UNIT_ATTRIBUTE_OPTIONAL

See :cellml2:`Section 2.6.1.3<reference/formal_and_informative/specB06.html?issue=UNIT_UNITS_CIRCULAR_REFERENCE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - UNIT_ATTRIBUTE_OPTIONAL
      :end-before: // start - UNIT_ATTRIBUTE_PREFIX_VALUE

See :cellml2:`Section 2.6.2<reference/formal_and_informative/specB06.html?issue=UNIT_ATTRIBUTE_OPTIONAL>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - UNIT_ATTRIBUTE_PREFIX_VALUE
      :end-before: // start - UNIT_ATTRIBUTE_MULTIPLIER_VALUE

See :cellml2:`Section 2.6.2.1.1<reference/formal_and_informative/specB06.html?issue=UNIT_ATTRIBUTE_PREFIX_VALUE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - UNIT_ATTRIBUTE_MULTIPLIER_VALUE
      :end-before: // start - UNIT_ATTRIBUTE_EXPONENT_VALUE

See :cellml2:`Section 2.6.2.2.1<reference/formal_and_informative/specB06.html?issue=UNIT_ATTRIBUTE_MULTIPLIER_VALUE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - UNIT_ATTRIBUTE_EXPONENT_VALUE
      :end-before: // start - COMPONENT_ELEMENT

See :cellml2:`Section 2.6.2.3.1<reference/formal_and_informative/specB06.html?issue=UNIT_ATTRIBUTE_EXPONENT_VALUE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - COMPONENT_ELEMENT
      :end-before: // start - COMPONENT_NAME

See :cellml2:`Section 2.7<reference/formal_and_informative/specB07.html?issue=COMPONENT_ELEMENT>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - COMPONENT_NAME
      :end-before: // start - COMPONENT_NAME_VALUE

See :cellml2:`Section 2.7.1<reference/formal_and_informative/specB07.html?issue=COMPONENT_NAME>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - COMPONENT_NAME_VALUE
      :end-before: // start - COMPONENT_NAME_UNIQUE

See :cellml2:`Section 2.7.1.1<reference/formal_and_informative/specB07.html?issue=COMPONENT_NAME_VALUE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - COMPONENT_NAME_UNIQUE
      :end-before: // start - COMPONENT_CHILD

See :cellml2:`Section 2.7.1.2<reference/formal_and_informative/specB07.html?issue=COMPONENT_NAME_UNIQUE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - COMPONENT_CHILD
      :end-before: // start - VARIABLE_ELEMENT

See :cellml2:`Section 2.7.2<reference/formal_and_informative/specB07.html?issue=COMPONENT_CHILD>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - VARIABLE_ELEMENT
      :end-before: // start - VARIABLE_ATTRIBUTE_REQUIRED

See :cellml2:`Section 2.8<reference/formal_and_informative/specB08.html?issue=VARIABLE_ELEMENT>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - VARIABLE_ATTRIBUTE_REQUIRED
      :end-before: // start - VARIABLE_NAME_VALUE

See :cellml2:`Section 2.8.1<reference/formal_and_informative/specB08.html?issue=VARIABLE_ATTRIBUTE_REQUIRED>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - VARIABLE_NAME_VALUE
      :end-before: // start - VARIABLE_NAME_UNIQUE

See :cellml2:`Section 2.8.1.1.1<reference/formal_and_informative/specB08.html?issue=VARIABLE_NAME_VALUE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - VARIABLE_NAME_UNIQUE
      :end-before: // start - VARIABLE_UNITS_VALUE

See :cellml2:`Section 2.8.1.1.2<reference/formal_and_informative/specB08.html?issue=VARIABLE_NAME_UNIQUE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - VARIABLE_UNITS_VALUE
      :end-before: // start - VARIABLE_ATTRIBUTE_OPTIONAL

See :cellml2:`Section 2.8.1.2.1<reference/formal_and_informative/specB08.html?issue=VARIABLE_UNITS_VALUE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - VARIABLE_ATTRIBUTE_OPTIONAL
      :end-before: // start - VARIABLE_INTERFACE_VALUE

See :cellml2:`Section 2.8.2<reference/formal_and_informative/specB08.html?issue=VARIABLE_ATTRIBUTE_OPTIONAL>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - VARIABLE_INTERFACE_VALUE
      :end-before: // start - VARIABLE_INITIAL_VALUE_VALUE

See :cellml2:`Section 2.8.2.1.1<reference/formal_and_informative/specB08.html?issue=VARIABLE_INTERFACE_VALUE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - VARIABLE_INITIAL_VALUE_VALUE
      :end-before: // start - RESET_ELEMENT

See :cellml2:`Section 2.8.2.2.1<reference/formal_and_informative/specB08.html?issue=VARIABLE_INITIAL_VALUE_VALUE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - RESET_ELEMENT
      :end-before: // start - RESET_ATTRIBUTE_REQUIRED

See :cellml2:`Section 2.9<reference/formal_and_informative/specB09.html?issue=RESET_ELEMENT>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - RESET_ATTRIBUTE_REQUIRED
      :end-before: // start - RESET_VARIABLE_REFERENCE

See :cellml2:`Section 2.9.1<reference/formal_and_informative/specB09.html?issue=RESET_ATTRIBUTE_REQUIRED>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - RESET_VARIABLE_REFERENCE
      :end-before: // start - RESET_TEST_VARIABLE_REFERENCE

See :cellml2:`Section 2.9.1.1.1<reference/formal_and_informative/specB09.html?issue=RESET_VARIABLE_REFERENCE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - RESET_TEST_VARIABLE_REFERENCE
      :end-before: // start - RESET_ORDER_VALUE

See :cellml2:`Section 2.9.1.2.1<reference/formal_and_informative/specB09.html?issue=RESET_TEST_VARIABLE_REFERENCE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - RESET_ORDER_VALUE
      :end-before: // start - RESET_ORDER_UNIQUE

See :cellml2:`Section 2.9.1.3.1<reference/formal_and_informative/specB09.html?issue=RESET_ORDER_VALUE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - RESET_ORDER_UNIQUE
      :end-before: // start - RESET_CHILD

See :cellml2:`Section 2.9.1.3.2<reference/formal_and_informative/specB09.html?issue=RESET_ORDER_UNIQUE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - RESET_CHILD
      :end-before: // start - RESET_RESET_VALUE_CHILD

See :cellml2:`Section 2.9.2<reference/formal_and_informative/specB09.html?issue=RESET_CHILD>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - RESET_RESET_VALUE_CHILD
      :end-before: // start - RESET_TEST_VALUE_CHILD

See :cellml2:`Section 2.9.2.1<reference/formal_and_informative/specB09.html?issue=RESET_RESET_VALUE_CHILD>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - RESET_TEST_VALUE_CHILD
      :end-before: // start - TEST_VALUE_ELEMENT

See :cellml2:`Section 2.9.2.2<reference/formal_and_informative/specB09.html?issue=RESET_TEST_VALUE_CHILD>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - TEST_VALUE_ELEMENT
      :end-before: // start - TEST_VALUE_CHILD

See :cellml2:`Section 2.10<reference/formal_and_informative/specB10.html?issue=TEST_VALUE_ELEMENT>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - TEST_VALUE_CHILD
      :end-before: // start - RESET_VALUE_ELEMENT

See :cellml2:`Section 2.10.1<reference/formal_and_informative/specB10.html?issue=TEST_VALUE_CHILD>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - RESET_VALUE_ELEMENT
      :end-before: // start - RESET_VALUE_CHILD

See :cellml2:`Section 2.11<reference/formal_and_informative/specB11.html?issue=RESET_VALUE_ELEMENT>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - RESET_VALUE_CHILD
      :end-before: // start - MATH_ELEMENT

See :cellml2:`Section 2.11.1<reference/formal_and_informative/specB11.html?issue=RESET_VALUE_CHILD>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - MATH_ELEMENT
      :end-before: // start - MATH_MATHML

See :cellml2:`Section 2.12<reference/formal_and_informative/specB12.html?issue=MATH_ELEMENT>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - MATH_MATHML
      :end-before: // start - MATH_CHILD

See :cellml2:`Section 2.12.1<reference/formal_and_informative/specB12.html?issue=MATH_MATHML>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - MATH_CHILD
      :end-before: // start - MATH_CI_VARIABLE_REFERENCE

See :cellml2:`Section 2.12.2<reference/formal_and_informative/specB12.html?issue=MATH_CHILD>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - MATH_CI_VARIABLE_REFERENCE
      :end-before: // start - MATH_CN_UNITS_ATTRIBUTE

See :cellml2:`Section 2.12.3<reference/formal_and_informative/specB12.html?issue=MATH_CI_VARIABLE_REFERENCE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - MATH_CN_UNITS_ATTRIBUTE
      :end-before: // start - MATH_CN_UNITS_ATTRIBUTE_REFERENCE

See :cellml2:`Section 2.12.4<reference/formal_and_informative/specB12.html?issue=MATH_CN_UNITS_ATTRIBUTE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - MATH_CN_UNITS_ATTRIBUTE_REFERENCE
      :end-before: // start - MATH_CN_BASE10

See :cellml2:`Section 2.12.4.1<reference/formal_and_informative/specB12.html?issue=MATH_CN_UNITS_ATTRIBUTE_REFERENCE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - MATH_CN_BASE10
      :end-before: // start - MATH_CN_FORMAT

See :cellml2:`Section 2.12.5<reference/formal_and_informative/specB12.html?issue=MATH_CN_BASE10>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - MATH_CN_FORMAT
      :end-before: // start - ENCAPSULATION_ELEMENT

See :cellml2:`Section 2.12.5.1<reference/formal_and_informative/specB12.html?issue=MATH_CN_FORMAT>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - ENCAPSULATION_ELEMENT
      :end-before: // start - ENCAPSULATION_CHILD

See :cellml2:`Section 2.13<reference/formal_and_informative/specB13.html?issue=ENCAPSULATION_ELEMENT>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - ENCAPSULATION_CHILD
      :end-before: // start - COMPONENT_REF_ELEMENT

See :cellml2:`Section 2.13.1<reference/formal_and_informative/specB13.html?issue=ENCAPSULATION_CHILD>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - COMPONENT_REF_ELEMENT
      :end-before: // start - COMPONENT_REF_COMPONENT_ATTRIBUTE

See :cellml2:`Section 2.14<reference/formal_and_informative/specB14.html?issue=COMPONENT_REF_ELEMENT>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - COMPONENT_REF_COMPONENT_ATTRIBUTE
      :end-before: // start - COMPONENT_REF_COMPONENT_ATTRIBUTE_REFERENCE

See :cellml2:`Section 2.14.1<reference/formal_and_informative/specB14.html?issue=COMPONENT_REF_COMPONENT_ATTRIBUTE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - COMPONENT_REF_COMPONENT_ATTRIBUTE_REFERENCE
      :end-before: // start - COMPONENT_REF_COMPONENT_ATTRIBUTE_UNIQUE

See :cellml2:`Section 2.14.1.1<reference/formal_and_informative/specB14.html?issue=COMPONENT_REF_COMPONENT_ATTRIBUTE_REFERENCE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - COMPONENT_REF_COMPONENT_ATTRIBUTE_UNIQUE
      :end-before: // start - COMPONENT_REF_CHILD

See :cellml2:`Section 2.14.1.2<reference/formal_and_informative/specB14.html?issue=COMPONENT_REF_COMPONENT_ATTRIBUTE_UNIQUE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - COMPONENT_REF_CHILD
      :end-before: // start - CONNECTION_ELEMENT

See :cellml2:`Section 2.14.2<reference/formal_and_informative/specB14.html?issue=COMPONENT_REF_CHILD>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - CONNECTION_ELEMENT
      :end-before: // start - CONNECTION_COMPONENT1_ATTRIBUTE

See :cellml2:`Section 2.15<reference/formal_and_informative/specB15.html?issue=CONNECTION_ELEMENT>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - CONNECTION_COMPONENT1_ATTRIBUTE
      :end-before: // start - CONNECTION_COMPONENT1_ATTRIBUTE_REFERENCE

See :cellml2:`Section 2.15.1<reference/formal_and_informative/specB15.html?issue=CONNECTION_COMPONENT1_ATTRIBUTE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - CONNECTION_COMPONENT1_ATTRIBUTE_REFERENCE
      :end-before: // start - CONNECTION_COMPONENT2_ATTRIBUTE

See :cellml2:`Section 2.15.1.1<reference/formal_and_informative/specB15.html?issue=CONNECTION_COMPONENT1_ATTRIBUTE_REFERENCE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - CONNECTION_COMPONENT2_ATTRIBUTE
      :end-before: // start - CONNECTION_COMPONENT2_ATTRIBUTE_REFERENCE

See :cellml2:`Section 2.15.2<reference/formal_and_informative/specB15.html?issue=CONNECTION_COMPONENT2_ATTRIBUTE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - CONNECTION_COMPONENT2_ATTRIBUTE_REFERENCE
      :end-before: // start - CONNECTION_EXCLUDE_SELF

See :cellml2:`Section 2.15.2.1<reference/formal_and_informative/specB15.html?issue=CONNECTION_COMPONENT2_ATTRIBUTE_REFERENCE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - CONNECTION_EXCLUDE_SELF
      :end-before: // start - CONNECTION_UNIQUE

See :cellml2:`Section 2.15.3<reference/formal_and_informative/specB15.html?issue=CONNECTION_EXCLUDE_SELF>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - CONNECTION_UNIQUE
      :end-before: // start - CONNECTION_CHILD

See :cellml2:`Section 2.15.4<reference/formal_and_informative/specB15.html?issue=CONNECTION_UNIQUE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - CONNECTION_CHILD
      :end-before: // start - MAP_VARIABLES_ELEMENT

See :cellml2:`Section 2.15.5<reference/formal_and_informative/specB15.html?issue=CONNECTION_CHILD>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - MAP_VARIABLES_ELEMENT
      :end-before: // start - MAP_VARIABLES_VARIABLE1_ATTRIBUTE

See :cellml2:`Section 2.16<reference/formal_and_informative/specB16.html?issue=MAP_VARIABLES_ELEMENT>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - MAP_VARIABLES_VARIABLE1_ATTRIBUTE
      :end-before: // start - MAP_VARIABLES_VARIABLE1_ATTRIBUTE_REFERENCE

See :cellml2:`Section 2.16.1<reference/formal_and_informative/specB16.html?issue=MAP_VARIABLES_VARIABLE1_ATTRIBUTE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - MAP_VARIABLES_VARIABLE1_ATTRIBUTE_REFERENCE
      :end-before: // start - MAP_VARIABLES_VARIABLE2_ATTRIBUTE

See :cellml2:`Section 2.16.1.1<reference/formal_and_informative/specB16.html?issue=MAP_VARIABLES_VARIABLE1_ATTRIBUTE_REFERENCE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - MAP_VARIABLES_VARIABLE2_ATTRIBUTE
      :end-before: // start - MAP_VARIABLES_VARIABLE2_ATTRIBUTE_REFERENCE

See :cellml2:`Section 2.16.2<reference/formal_and_informative/specB16.html?issue=MAP_VARIABLES_VARIABLE2_ATTRIBUTE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - MAP_VARIABLES_VARIABLE2_ATTRIBUTE_REFERENCE
      :end-before: // start - MAP_VARIABLES_UNIQUE

See :cellml2:`Section 2.16.2.1<reference/formal_and_informative/specB16.html?issue=MAP_VARIABLES_VARIABLE2_ATTRIBUTE_REFERENCE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - MAP_VARIABLES_UNIQUE
      :end-before: // start - DATA_REPR_IDENTIFIER_AT_LEAST_ONE_ALPHANUM

See :cellml2:`Section 2.16.3<reference/formal_and_informative/specB16.html?issue=MAP_VARIABLES_UNIQUE>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - DATA_REPR_IDENTIFIER_AT_LEAST_ONE_ALPHANUM
      :end-before: // start - DATA_REPR_IDENTIFIER_BEGIN_EURO_NUM

See :cellml2:`Section 1.3.1.1<reference/formal_and_informative/specA03.html?issue=DATA_REPR_IDENTIFIER_AT_LEAST_ONE_ALPHANUM>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - DATA_REPR_IDENTIFIER_BEGIN_EURO_NUM
      :end-before: // start - DATA_REPR_IDENTIFIER_LATIN_ALPHANUM

See :cellml2:`Section 1.3.1.1<reference/formal_and_informative/specA03.html?issue=DATA_REPR_IDENTIFIER_BEGIN_EURO_NUM>`

.. container:: issue-code

   .. include:: runtime_codes.cpp
      :start-after: // start - DATA_REPR_IDENTIFIER_LATIN_ALPHANUM
      :end-before: // end - SPECIFICATION_ISSUES_END

See :cellml2:`Section 1.3.1.1<reference/formal_and_informative/specA03.html?issue=DATA_REPR_IDENTIFIER_LATIN_ALPHANUM>`
