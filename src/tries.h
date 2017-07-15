/**
 * Declaration of tries data structure and
 * declare methods for working tries
 */

#include <stdbool.h>

/**
 * Defining type, which will using
 * with tries
 */
#ifndef TYPE
#define TYPE char*
#endif

// amount of keys to access a child
#define KEYS 27

typedef struct _tries
{
	bool is_leaf;
	struct _tries* children[KEYS];
} tries;

/**
 * Adds item into trie
 */
void add_child(tries* root, TYPE word, int pos, int len);

/**
 * Check if given item has in tries
 */
bool is_present(tries* root, TYPE word, int pos, int len);

/**
 * Remove all items from tries
 */
void clear(tries* root);
