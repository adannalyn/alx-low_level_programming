#include "main.h"
/**
 * print_to_98 - prints all natural numbers
 * @n: integer
 */
void print_to_98(int n)
{
	for (; n < 98; n++)
	{
		printf("%d, ", n);
	}
	for (; n > 98; n--)
		printf("%d, ", n);
	printf("%d", 98);
	putchar('\n');
}
