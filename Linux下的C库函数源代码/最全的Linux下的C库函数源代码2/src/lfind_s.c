/***
*lfind_s.c - do a linear search
*
*   Copyright (c) Microsoft Corporation. All rights reserved.
*
*Purpose:
*   defines _lfind_s() - do a linear search of an array.
*
*******************************************************************************/

/***
*char *_lfind_s(key, base, num, width, compare, context) - do a linear search
*
*Purpose:
*   Performs a linear search on the array, looking for the value key
*   in an array of num elements of width bytes in size.  Returns
*   a pointer to the array value if found, NULL if not found.
*   The function accepts a context pointer as last parameter, which is
*   passed to comparison function.
*
*Entry:
*   char *key - key to search for
*   char *base - base of array to search
*   unsigned *num - number of elements in array
*   int width - number of bytes in each array element
*   int (*compare)() - pointer to function that compares two
*       array values, returning 0 if they are equal and non-0
*       if they are different.  Two pointers to array elements
*       are passed to this function, together with a pointer to
*       a context.
*   void *context - pointer to the context in which the function is
*       called. This context is passed to the comparison function.
*
*Exit:
*   if key found:
*       returns pointer to array element
*   if key not found:
*       returns NULL
*
*Exceptions:
*   Input parameters are validated. Refer to the validation section of the function.
*
*******************************************************************************/

#ifdef __USE_CONTEXT
#error __USE_CONTEXT should be undefined
#endif  /* __USE_CONTEXT */

#define __USE_CONTEXT
#include "lfind.c"
