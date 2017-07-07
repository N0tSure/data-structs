#include <stdbool.h>
#include <stdio.h>
#include "object.h"
#include "linked_list.h"

void printList(node* list);

int main()
{
	int foes_size = 5;
    char* foes[5] = { "foo", "bar", "baz", "qux", "quux" };
    
	create(foes[0]);
	for (int i = 1; i < foes_size; i++)
	{
		insert(foes[i]);
	}
	
	printf("Contains foo: %s\n", contains(foes[0]) ? "yes" : "no");
	printf("Contains baz: %s\n", contains("baz") ? "yes" : "no");
	printf("Contains qux before remove: %s\n", contains("qux") ? "yes" : "no");
	printf("Contains corge: %s\n", contains("corge") ? "yes" : "no");
	printf("Contains NULL: %s\n", contains(NULL) ? "yes" : "no");
	
	removeElement("foo");
	removeElement("quux");
	
	printf("Contains after clear foo: %s\n", contains(foes[0]) ? "yes" : "no");
	printf("Contains after clear baz: %s\n", contains("baz") ? "yes" : "no");
	printf("Contains after clear quux: %s\n", contains("quux") ? "yes" : "no");
    
    return 0;
}
