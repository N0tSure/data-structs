#include <stdio.h>
#include "stack.h"
#include "iterator.h"

int main(int argc, char* argv[])
{
	if (argc > 1) {
		for (int i = 1; i < argc; i++)
		{
			push(argv[i]);
			printf("%s ", argv[i]);
		}
		printf("\n");
		
		
	}
	
	char* s;
	while((s = pop()) != NULL)
		printf("%s ", s);
	
	printf("\n");

    return 0;
}
