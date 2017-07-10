/**
 * Set interface declaration, typed for
 * contain strings
 */

#include <stdbool.h>

#define TYPE char*

/**
 * If set contains given item
 * returns true
 */
bool contains(TYPE item);

/**
 * Add item to the set, if set not
 * already contain this one. Otherwise
 * do nothing
 */
void add(TYPE item);

/**
 * Remove item from the set, if set 
 * contain this item. Else do nothing
 */
void removeItem(TYPE item);

/**
 * Remove all items from set if it contains any
 */
void removeAll();
