#include <stdio.h>

int main(void)
{
	char *lineptr = NULL;
	size_t len = 0;

	printf("$ ");
	while (getline(&lineptr, &len, stdin) - 1)
	{
		printf("%s\n", lineptr);
		printf("$ ");
	}
	return (0);
}
