/**
 * Linked list based stack implementation
 */
#include <stdlib.h>
#include "stack.h"
#include "linked_list.h"

node* _storage = NULL;

void push(TYPE item)
{
	_storage = insert(item, _storage);
}

TYPE pop()
{
	TYPE result = NULL;
	if (_storage != NULL)
	{
		result = _storage->value;
		_storage = removeFirst(_storage);
	}

	return result; 
}
