/**
 * Linked list implementation
 */

#include <stdbool.h>
#include <stdlib.h>
#include "object.h"
#include "linked_list.h"

node* _storage;

void create(TYPE value)
{
    _storage = malloc(sizeof(node));
    if (_storage != NULL)
    {
        _storage->value = value;
        _storage->next = NULL;
    }
    
}

bool containsElement(TYPE element, node* list)
{
    node* tmp = list;
    while (tmp != NULL)
    {
        if (equal(tmp->value, element))
        {
            return true;
        }
        
        tmp = tmp->next;
    }
    
    return false;
}

node* insert(TYPE element, node* list)
{
    node* new_head = malloc(sizeof(node));
    if (new_head != NULL)
    {
        new_head->value = element;
        new_head->next = list;
		list = new_head;
    }
	
	return list;
}

TYPE removeFirst()
{
	TYPE res = NULL;
    if (_storage != NULL)
    {
		node* old_head = _storage;
		res = _storage->value;
        _storage = _storage->next;
        free(old_head);
    }
    
    return res;
}

TYPE removeLast()
{
	TYPE res = NULL;
    if (_storage != NULL)
    {
        if (_storage->next == NULL)
        {
            res = _storage->value;
            free(_storage);
            _storage = NULL;
        }
        else
        {
            node* trav = _storage;
            node* prev = NULL;
            while (trav->next != NULL)
            {
                prev = trav;
                trav = trav->next;
                
            }
            res = trav->value;
            if (prev != NULL)
            prev->next = NULL;
            free(trav);
        }
    }
        
	return res;
}

bool removeElement(TYPE element, node* list)
{
	node* prev = NULL;
	node* trav = list;
	while (trav != NULL)
	{
		if (equal(trav->value, element))
		{
			if (prev != NULL)
			{
				prev->next = trav->next;
			}
			free(trav);
			return true;
		}
		prev = trav;
		trav = trav->next;
	}
	
	return false;
}

void clear()
{
    while (_storage != NULL)
	{
		node* tmp = _storage;
		_storage = _storage->next;
		free(tmp);
	}
}
