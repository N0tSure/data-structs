#include <stdio.h>
#include <string.h>
#include "tries.h"

int main(int argc, char* argv[])
{
	if (argc > 1) {
        tries* root = create_tries();
		for (int i = 1; i < argc; i++)
		{
			add_child(root, argv[i], 0, strlen(argv[i]));
			printf("%s ", argv[i]);
		}
		printf("\n");
		
		for (int i = 1; i < argc; i++)
        {
            printf("%s ", is_present(root, argv[i], 0, strlen(argv[i])) ? argv[i] : "");
        }
        printf("\n");
        
        remove_all(root);
        
        for (int i = 1; i < argc; i++)
        {
            printf("%s ", is_present(root, argv[i], 0, strlen(argv[i])) ? argv[i] : "");
        }
        
	}
	
	
	printf("\n");

    return 0;
}
