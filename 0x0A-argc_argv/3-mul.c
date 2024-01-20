#include "main.h"

/**
 * main - entry point
 * @argc: count of arguments
 * @agv: array of pointers
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, mul = 0;
	long num;

	if (argc < 1)
	{
		printf("Error\n");
		return 1;
	}
	for (i = 1; i < argc; i++)
	{
		num = strtol(argv[i], NULL, 10);
	}
	printf("%d\n", mul);
}
