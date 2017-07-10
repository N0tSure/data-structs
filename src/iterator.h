/**
 * Declares functionallity for iterating
 * through the list
 */
#include <stdbool.h>
#include "linked_list.h"

/**
 * Initialize new iterator
 */
void iterator(node* list);

/**
 * Return true if list has next element
 */
bool hasNext();

/**
 * Return next element if given list
 * contain this
 */
TYPE next();
