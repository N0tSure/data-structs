/**
 * LinkedList interface declaration, storage must
 * store globally
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
void create(TYPE value);

/**
 * Check that given list contains element
 */
bool contains(TYPE value);

/**
 * Insert new value to the list
 */
void insert(TYPE value);

/**
 * Remove first element from list
 * and return it
 */
TYPE removeFirst();

/**
 * Remove first element from list
 * and return it
 */
TYPE removeLast();

/**
 * Search and remove node with current
 * element, return true if val founded 
 * and removed
 */
bool removeElement(TYPE val);

/**
 * Remove all nodes from list
 */
void clear();
