#include "stack.h"
#include "linked_list.h"


void push(TYPE item)
{
	insert(item);
}

TYPE pop()
{
	return removeFirst();
}
