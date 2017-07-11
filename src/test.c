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
		
		for (int i = 1; i < argc; i++)
		{
			printf("before '%s' present: %s\n", argv[i], contains(argv[i]) ? "yes" : "no");
		}
		
		printf("\n");
		printf("\n");
		
		char* fo[3] = { "foo", "bar", "baz" };
		for (int i = 1; i < argc; i++)
		{
			printf("before '%s' present: %s\n", fo[i % 3], contains(fo[i % 3]) ? "yes" : "no");
		}
		
		printf("\n");
		printf("\n");
		removeAll();
		
		for (int i = 1; i < argc; i++)
		{
			printf("after '%s' present: %s\n", argv[i], contains(argv[i]) ? "yes" : "no");
		}
	}
	
	
	printf("\n");

    return 0;
}
