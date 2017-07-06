/**
 * Common functional for collection elements
 */
 
#define TYPE char*

#include <stdbool.h>

/**
 * Returns hashcode of object
 */
int hashcode(TYPE self);

/**
 * Returns true if objects equals
 */
bool equal(TYPE first, TYPE second);

/**
 * Returns object as string
 */
char* to_string(TYPE self);
