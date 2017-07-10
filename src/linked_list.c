/**
 * Linked list implementation
 */

#include <stdbool.h>
#include <stdlib.h>
#include "object.h"
#include "linked_list.h"

node* create(TYPE value)
{
    node* result = malloc(sizeof(node));
    if (result != NULL)
    {
        result->value = value;
        result->next = NULL;
    }
    
    return result;
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

node* removeFirst(node* list)
{
    if (list != NULL)
    {
		node* old_head = list;
        list = list->next;
        free(old_head);
    }
    
    return list;
}

node* removeLast(node* list)
{
    if (list != NULL)
    {
        if (list->next == NULL)
        {
            free(list);
            list = NULL;
        }
        else
        {
            node* last = list;
            node* prev = NULL;
            
            while (last->next != NULL)
            {
                prev = last;
                last = last->next;
                
            }

            if (prev != NULL)
                prev->next = NULL;

            free(last);
        }
    }
        
	return list;
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

void clear(node* list)
{
    while (list != NULL)
	{
		node* tmp = list;
		list = list->next;
		free(tmp);
	}
}
