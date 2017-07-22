#include <stdio.h>
#include <string.h>
#include "set.h"

int main(int argc, char* argv[])
{
	if (argc > 1) {
		for (int i = 1; i < argc; i++)
		{
			printf("%s ", argv[i]);
            add(argv[i]);
		}
		printf("\n");
		
        for (int i = 1; i < argc; i++)
		{
			printf("%s ", contains(argv[i]) ? argv[i] : "?");
		}
        
        printf("\n");
        removeAll();
        
        for (int i = 1; i < argc; i++)
        {
            printf("%s ", contains(argv[i]) ? argv[i] : "?");
        }
	}
	
	
	printf("\n");

    return 0;

}
