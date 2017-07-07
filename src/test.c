#include <stdbool.h>
#include <stdio.h>
#include "object.h"
#include "stack.h"

int main(int argc, char* argv[])
{
    
	for (int i = 1; i < argc; ++i)
	{
		push(argv[i]);
	}

    char* s;
    while ((s = pop()) != NULL)
    {
    	printf("pop: %s\n", s);
    }

    return 0;
}
