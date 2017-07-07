/**
 * Stack interface declaration
 */

#define TYPE char*

/**
 * Pop item on top stack
 */
void push(TYPE item);

/**
 * Remove element from top of the stack
 * and return it
 */
TYPE pop();
