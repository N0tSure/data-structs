/** Implementation of iterator for 
 * linked list
 */
#include <stdbool.h>
#include <stdlib.h>
#include "linked_list.h"
#include "iterator.h"

node* _internal_lst = NULL;

void iterator(node* list)
{
	_internal_lst = list;
}

bool hasNext()
{
	return _internal_lst != NULL;
}

TYPE next()
{
	TYPE result = _internal_lst->value;
	_internal_lst = _internal_lst->next;
	return result;
}
