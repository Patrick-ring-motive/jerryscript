/* Copyright JS Foundation and other contributors, http://js.foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * Global built-in description
 */

#include "ecma-builtin-helpers-macro-defines.inc.h"

/* Simple value properties:
 * (property name, simple value, writable, enumerable, configurable) */

/* ECMA-262 v5, 15.1.1.3 */
SIMPLE_VALUE (LIT_MAGIC_STRING_UNDEFINED, ECMA_VALUE_UNDEFINED, ECMA_PROPERTY_FIXED)

/* Number properties:
 *  (property name, number value, writable, enumerable, configurable) */

/* ECMA-262 v5, 15.1.1.1 */
NUMBER_VALUE (LIT_MAGIC_STRING_NAN, ECMA_BUILTIN_NUMBER_NAN, ECMA_PROPERTY_FIXED)

/* ECMA-262 v5, 15.1.1.2 */
NUMBER_VALUE (LIT_MAGIC_STRING_INFINITY_UL, ECMA_BUILTIN_NUMBER_POSITIVE_INFINITY, ECMA_PROPERTY_FIXED)

/* Object properties:
 *  (property name, object pointer getter) */

/* ECMA-262 v5, 15.1.4.1 */
OBJECT_VALUE (LIT_MAGIC_STRING_OBJECT_UL, ECMA_BUILTIN_ID_OBJECT, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)

/* ECMA-262 v5, 15.1.4.2 */
OBJECT_VALUE (LIT_MAGIC_STRING_FUNCTION_UL, ECMA_BUILTIN_ID_FUNCTION, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)

/* ECMA-262 v5, 15.1.4.3 */
#if JERRY_BUILTIN_ARRAY
OBJECT_VALUE (LIT_MAGIC_STRING_ARRAY_UL, ECMA_BUILTIN_ID_ARRAY, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)
#endif /* JERRY_BUILTIN_ARRAY */

#if JERRY_BUILTIN_STRING
/* ECMA-262 v5, 15.1.4.4 */
OBJECT_VALUE (LIT_MAGIC_STRING_STRING_UL, ECMA_BUILTIN_ID_STRING, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)
#endif /* JERRY_BUILTIN_STRING */

#if JERRY_BUILTIN_BOOLEAN
/* ECMA-262 v5, 15.1.4.5 */
OBJECT_VALUE (LIT_MAGIC_STRING_BOOLEAN_UL, ECMA_BUILTIN_ID_BOOLEAN, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)
#endif /* JERRY_BUILTIN_BOOLEAN */

#if JERRY_BUILTIN_NUMBER
/* ECMA-262 v5, 15.1.4.6 */
OBJECT_VALUE (LIT_MAGIC_STRING_NUMBER_UL, ECMA_BUILTIN_ID_NUMBER, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)
#endif /* JERRY_BUILTIN_NUMBER */

#if JERRY_BUILTIN_DATE
/* ECMA-262 v5, 15.1.4.7 */
OBJECT_VALUE (LIT_MAGIC_STRING_DATE_UL, ECMA_BUILTIN_ID_DATE, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)
#endif /* JERRY_BUILTIN_DATE */

#if JERRY_BUILTIN_REGEXP
/* ECMA-262 v5, 15.1.4.8 */
OBJECT_VALUE (LIT_MAGIC_STRING_REGEXP_UL, ECMA_BUILTIN_ID_REGEXP, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)
#endif /* JERRY_BUILTIN_REGEXP */

/* ECMA-262 v5, 15.1.4.9 */
OBJECT_VALUE (LIT_MAGIC_STRING_ERROR_UL, ECMA_BUILTIN_ID_ERROR, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)

#if JERRY_BUILTIN_ERRORS

/* ECMA-262 v5, 15.1.4.10 */
OBJECT_VALUE (LIT_MAGIC_STRING_EVAL_ERROR_UL, ECMA_BUILTIN_ID_EVAL_ERROR, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)

/* ECMA-262 v5, 15.1.4.11 */
OBJECT_VALUE (LIT_MAGIC_STRING_RANGE_ERROR_UL, ECMA_BUILTIN_ID_RANGE_ERROR, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)

/* ECMA-262 v5, 15.1.4.12 */
OBJECT_VALUE (LIT_MAGIC_STRING_REFERENCE_ERROR_UL, ECMA_BUILTIN_ID_REFERENCE_ERROR, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)

/* ECMA-262 v5, 15.1.4.13 */
OBJECT_VALUE (LIT_MAGIC_STRING_SYNTAX_ERROR_UL, ECMA_BUILTIN_ID_SYNTAX_ERROR, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)

/* ECMA-262 v5, 15.1.4.14 */
OBJECT_VALUE (LIT_MAGIC_STRING_TYPE_ERROR_UL, ECMA_BUILTIN_ID_TYPE_ERROR, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)

/* ECMA-262 v5, 15.1.4.15 */
OBJECT_VALUE (LIT_MAGIC_STRING_URI_ERROR_UL, ECMA_BUILTIN_ID_URI_ERROR, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)
#endif /* JERRY_BUILTIN_ERRORS */

#if JERRY_BUILTIN_MATH
/* ECMA-262 v5, 15.1.5.1 */
OBJECT_VALUE (LIT_MAGIC_STRING_MATH_UL, ECMA_BUILTIN_ID_MATH, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)
#endif /* JERRY_BUILTIN_MATH */
#if JERRY_BUILTIN_REFLECT
/* ECMA-262 v6, 26.1 */
OBJECT_VALUE (LIT_MAGIC_STRING_REFLECT_UL, ECMA_BUILTIN_ID_REFLECT, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)
#endif /* JERRY_BUILTIN_REFLECT */

#if JERRY_BUILTIN_JSON
/* ECMA-262 v5, 15.1.5.2 */
OBJECT_VALUE (LIT_MAGIC_STRING_JSON_U, ECMA_BUILTIN_ID_JSON, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)
#endif /* JERRY_BUILTIN_JSON */

#if JERRY_BUILTIN_ATOMICS
/* ECMA-262 v5, 15.1.5.2 */
OBJECT_VALUE (LIT_MAGIC_STRING_ATOMICS_U, ECMA_BUILTIN_ID_ATOMICS, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)
#endif /* JERRY_BUILTIN_ATOMICS */

#if JERRY_BUILTIN_TYPEDARRAY
OBJECT_VALUE (LIT_MAGIC_STRING_ARRAY_BUFFER_UL, ECMA_BUILTIN_ID_ARRAYBUFFER, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)

#if JERRY_BUILTIN_SHAREDARRAYBUFFER
OBJECT_VALUE (LIT_MAGIC_STRING_SHARED_ARRAY_BUFFER_UL,
              ECMA_BUILTIN_ID_SHARED_ARRAYBUFFER,
              ECMA_PROPERTY_CONFIGURABLE_WRITABLE)
#endif /* JERRY_BUILTIN_SHAREDARRAYBUFFER */

OBJECT_VALUE (LIT_MAGIC_STRING_INT8_ARRAY_UL, ECMA_BUILTIN_ID_INT8ARRAY, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)

OBJECT_VALUE (LIT_MAGIC_STRING_UINT8_ARRAY_UL, ECMA_BUILTIN_ID_UINT8ARRAY, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)

OBJECT_VALUE (LIT_MAGIC_STRING_INT16_ARRAY_UL, ECMA_BUILTIN_ID_INT16ARRAY, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)

OBJECT_VALUE (LIT_MAGIC_STRING_UINT16_ARRAY_UL, ECMA_BUILTIN_ID_UINT16ARRAY, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)

OBJECT_VALUE (LIT_MAGIC_STRING_INT32_ARRAY_UL, ECMA_BUILTIN_ID_INT32ARRAY, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)

OBJECT_VALUE (LIT_MAGIC_STRING_UINT32_ARRAY_UL, ECMA_BUILTIN_ID_UINT32ARRAY, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)

OBJECT_VALUE (LIT_MAGIC_STRING_FLOAT32_ARRAY_UL, ECMA_BUILTIN_ID_FLOAT32ARRAY, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)

#if JERRY_NUMBER_TYPE_FLOAT64
OBJECT_VALUE (LIT_MAGIC_STRING_FLOAT64_ARRAY_UL, ECMA_BUILTIN_ID_FLOAT64ARRAY, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)
#endif /* JERRY_NUMBER_TYPE_FLOAT64 */

#if JERRY_BUILTIN_BIGINT
OBJECT_VALUE (LIT_MAGIC_STRING_BIGINT64_ARRAY_UL, ECMA_BUILTIN_ID_BIGINT64ARRAY, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)

OBJECT_VALUE (LIT_MAGIC_STRING_BIGUINT64_ARRAY_UL, ECMA_BUILTIN_ID_BIGUINT64ARRAY, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)
#endif /* JERRY_BUILTIN_BIGINT */

OBJECT_VALUE (LIT_MAGIC_STRING_UINT8_CLAMPED_ARRAY_UL,
              ECMA_BUILTIN_ID_UINT8CLAMPEDARRAY,
              ECMA_PROPERTY_CONFIGURABLE_WRITABLE)

#endif /* JERRY_BUILTIN_TYPEDARRAY */

#if JERRY_BUILTIN_CONTAINER
/* ECMA-262 v6, 23.1.1.1 */
OBJECT_VALUE (LIT_MAGIC_STRING_WEAKSET_UL, ECMA_BUILTIN_ID_WEAKSET, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)

/* ECMA-262 v6, 23.1.1.1 */
OBJECT_VALUE (LIT_MAGIC_STRING_MAP_UL, ECMA_BUILTIN_ID_MAP, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)

/* ECMA-262 v6, 23.1.1.1 */
OBJECT_VALUE (LIT_MAGIC_STRING_SET_UL, ECMA_BUILTIN_ID_SET, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)

/* ECMA-262 v6, 23.1.1.1 */
OBJECT_VALUE (LIT_MAGIC_STRING_WEAKMAP_UL, ECMA_BUILTIN_ID_WEAKMAP, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)
#endif /* JERRY_BUILTIN_CONTAINER */

#if JERRY_BUILTIN_WEAKREF
OBJECT_VALUE (LIT_MAGIC_STRING_WEAKREF_UL, ECMA_BUILTIN_ID_WEAKREF, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)
#endif /* JERRY_BUILTIN_WEAKREF */

OBJECT_VALUE (LIT_MAGIC_STRING_AGGREGATE_ERROR_UL, ECMA_BUILTIN_ID_AGGREGATE_ERROR, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)

OBJECT_VALUE (LIT_MAGIC_STRING_PROMISE_UL, ECMA_BUILTIN_ID_PROMISE, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)

/* ECMA-262 v6, 19.4.1.1 */
OBJECT_VALUE (LIT_MAGIC_STRING_SYMBOL_UL, ECMA_BUILTIN_ID_SYMBOL, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)

#if JERRY_BUILTIN_GLOBAL_THIS
/* ECMA-262 v11, 18.1.1 */
SIMPLE_VALUE (LIT_MAGIC_STRING_GLOBAL_THIS_UL, ECMA_VALUE_GLOBAL_THIS, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)
#endif /* JERRY_BUILTIN_GLOBAL_THIS */

#if JERRY_BUILTIN_DATAVIEW
/* ECMA-262 v6, 23.1.1.1 */
OBJECT_VALUE (LIT_MAGIC_STRING_DATAVIEW_UL, ECMA_BUILTIN_ID_DATAVIEW, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)
#endif /* JERRY_BUILTIN_DATAVIEW */

#if JERRY_BUILTIN_PROXY
/* ECMA-262 v6, 26.2.1 */
OBJECT_VALUE (LIT_MAGIC_STRING_PROXY_UL, ECMA_BUILTIN_ID_PROXY, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)
#endif /* JERRY_BUILTIN_PROXY */

#if JERRY_BUILTIN_BIGINT
/* ECMA-262 v11, 20.2.1 */
OBJECT_VALUE (LIT_MAGIC_STRING_BIGINT_UL, ECMA_BUILTIN_ID_BIGINT, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)
#endif /* JERRY_BUILTIN_BIGINT */

/* Routine properties:
 *  (property name, C routine name, arguments number or NON_FIXED, value of the routine's length property) */

ROUTINE (LIT_MAGIC_STRING_EVAL, ECMA_GLOBAL_EVAL, 1, 1)
ROUTINE (LIT_MAGIC_STRING_IS_NAN, ECMA_GLOBAL_IS_NAN, 1, 1)
ROUTINE (LIT_MAGIC_STRING_IS_FINITE, ECMA_GLOBAL_IS_FINITE, 1, 1)
ROUTINE (LIT_MAGIC_STRING_DECODE_URI, ECMA_GLOBAL_DECODE_URI, 1, 1)
ROUTINE (LIT_MAGIC_STRING_DECODE_URI_COMPONENT, ECMA_GLOBAL_DECODE_URI_COMPONENT, 1, 1)
ROUTINE (LIT_MAGIC_STRING_ENCODE_URI, ECMA_GLOBAL_ENCODE_URI, 1, 1)
ROUTINE (LIT_MAGIC_STRING_ENCODE_URI_COMPONENT, ECMA_GLOBAL_ENCODE_URI_COMPONENT, 1, 1)

INTRINSIC_PROPERTY (LIT_MAGIC_STRING_PARSE_FLOAT, LIT_MAGIC_STRING_PARSE_FLOAT, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)
INTRINSIC_PROPERTY (LIT_MAGIC_STRING_PARSE_INT, LIT_MAGIC_STRING_PARSE_INT, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)

#if JERRY_BUILTIN_ANNEXB
ROUTINE (LIT_MAGIC_STRING_ESCAPE, ECMA_GLOBAL_ESCAPE, 1, 1)
ROUTINE (LIT_MAGIC_STRING_UNESCAPE, ECMA_GLOBAL_UNESCAPE, 1, 1)
#endif /* JERRY_BUILTIN_ANNEXB */

#include "ecma-builtin-helpers-macro-undefs.inc.h"
