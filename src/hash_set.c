/**
 * Implementation of set based on hash table,
 * without rehash function. Use B_SIZE to 
 * adjust hash table factor.
 */
 
#define B_SIZE 10
 
#include <stdbool.h>
#include <stdlib.h>
#include "set.h"
#include "object.h"
#include "linked_list.h"

node* _buckets[B_SIZE];
bool _is_initialized = false;

bool contains(TYPE item)
{
	if (_is_initialized)
	{
		int index = hashcode(item) % B_SIZE;
		return _buckets[index] == NULL;
	}
	else
	{
		return false;
	}
}

void add(TYPE item)
{
	
}

void _init_()
{
	for(int i = 0; i < B_SIZE; i++)
		_buckets[i] = NULL;
	
	_is_initialized = true;
}
