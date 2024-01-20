#include "main.h"

/**
 * main - entry point
 * @argc: count of arguments
 * @argv: array of pointers
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
}
