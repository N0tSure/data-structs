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

void _init_();

node* _buckets[B_SIZE];
bool _is_initialized = false;

bool contains(TYPE item)
{
	if (_is_initialized && item != NULL)
	{
		int index = hashcode(item) % B_SIZE;
		
		return _buckets[index] != NULL && containsElement(item, _buckets[index]);
	}
	
	return false;
}

bool add(TYPE item)
{
	if(!_is_initialized)
	{
		_init_();
	}
	int index = hashcode(item) % B_SIZE;
	
	if (_buckets[index] != NULL && !containsElement(item, _buckets[index]))
	{
		_buckets[index] = insert(item, _buckets[index]);
		return true;
	}
	
	return false;
}

void _init_()
{
	for(int i = 0; i < B_SIZE; i++)
		_buckets[i] = NULL;
	
	_is_initialized = true;
}
