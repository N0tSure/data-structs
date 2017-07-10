#include <stdio.h>
#include "object.h"
#include "linked_list.h"
#include "iterator.h"
#include "set.h"

int main(int argc, char* argv[])
{
    node* list = NULL;
	if (argc > 1) {
		for (int i = 1; i < argc; i++)
		{
			list = insert(argv[i], list);
			printf("%s ", argv[i]);
		}
		printf("\n");
		
		// char s[10];
		// scanf("%s", s);
		// printf("%s : %c\n", s, removeElement(s, list) ? 'y' : 'n');
		clear(list);
		list = NULL;
	}
	
	iterator(list);
	while(hasNext())
		printf("%s ", next());
	
	printf("\n");

    return 0;
}
