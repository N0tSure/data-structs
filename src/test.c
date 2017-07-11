#include <stdio.h>
#include "set.h"
#include "iterator.h"

int main(int argc, char* argv[])
{
	if (argc > 1) {
		for (int i = 1; i < argc; i++)
		{
			add(argv[i]);
			printf("%s ", argv[i]);
		}
		printf("\n");
		
		char s[10];
		scanf("%s", s);
		
		printf("'%s' present: %s", s, contains(s) ? "yes" : "no");
	}
	
	
	printf("\n");

    return 0;
}
