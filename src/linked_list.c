/**
 * Linked list implementation
 */

#include <stdbool.h>
#include <stdlib.h>
#include "object.h"
#include "linked_list.h"

node* create(TYPE value)
{
    node* res = malloc(sizeof(node));
    if (res != NULL)
    {
        res->value = value;
        res->next = NULL;
    }
    
    return res;
}

bool contains(node* list, TYPE value)
{
    node* tmp = list;
    while (tmp != NULL)
    {
        if (equal(tmp->value, value))
        {
            return true;
        }
        
        tmp = tmp->next;
    }
    
    return false;
}

node* insert(node* list, TYPE value)
{
    node* new_head = malloc(sizeof(node));
    if (new_head != NULL)
    {
        new_head->value = value;
        new_head->next = list;
        return new_head;
    }
    else
    {
        return list;
    }
}

node* removeFirst(node* list)
{
    if (list != NULL)
    {
        node* head = list->next;
        free(list);
        return head;
    }
    
    return list;
}

void removeAll(node* list)
{
    while(list != NULL)
    {
        list = removeFirst(list);
    }
}
