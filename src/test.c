#include <stdbool.h>
#include <stdio.h>
#include "object.h"
#include "linked_list.h"

void printList(node* list);

int main()
{
    char* foes[4] = { "bar", "baz", "qux", "quux" };
    node* list = create("foo");
    
    for (int i = 0; i < 4; i++)
    {
        list = insert(list, foes[i]);
    }
    
    printList(list);
    list = removeFirst(list);
    printList(list);
    return 0;
}

void printList(node* list)
{
    node* trav = list;
    while (trav != NULL)
    {
        printf("%s ", trav->value);
        trav = trav->next;
    }
    
    printf("\n");
}