#include <stdio.h>

int main(void)
{
	char *lineptr = NULL;
	size_t len = 0;

	printf("$ ");
<<<<<<< HEAD:simple_shell/getline.c
	while (getline(&lineptr, &len, stdin) - 1)
	{
		printf("%s\n", lineptr);
		printf("$ ");
	}
	return (0);
=======
	nread = getline(&lineptr, &len, stdin);
	printf("%s", lineptr);

>>>>>>> d42a1ef60d2513e5e0b8745a7a92e86391a33e0c:simple_shell/test/getline.c
}
