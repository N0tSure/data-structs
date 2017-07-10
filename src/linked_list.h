/**
 * LinkedList interface declaration, storage must
 * store locally
 */

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdbool.h>
#include "object.h"

/**
 * List's node declaration
 */
typedef struct _node 
{
    TYPE value;
    struct _node* next;
}
node;

/**
 * Creates new linked list
 */
node* create(TYPE value);

/**
 * Check that given list contains element
 */
bool containsElement(TYPE element, node* list);

/**
 * Insert new element to the list,
 * and returns link to list after insertion
 */
node* insert(TYPE element, node* list);

/**
 * Remove first element from list
 * and return it
 */
node* removeFirst(node* list);

/**
 * Remove first element from list
 * and return it
 */
node* removeLast(node* list);

/**
 * Search and remove node with current
 * element, return true if element founded 
 * and removed
 */
bool removeElement(TYPE element, node* list);

/**
 * Remove all nodes from list
 */
void clear(node* list);

#endif
