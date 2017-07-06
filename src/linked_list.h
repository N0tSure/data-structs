/**
 * LinkedList interface declaration
 */

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
bool contains(node* list, TYPE value);

/**
 * Insert new value to the list
 */
node* insert(node* list, TYPE value);

/**
 * Remove first value from list
 */
node* removeFirst(node* list);

/**
 * Remove all nodes from list
 */
void removeAll(node* list);
