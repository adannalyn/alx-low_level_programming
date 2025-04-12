#include "main.h"
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	unsigned long count, fibo = 0, first = 2, second = 3, length = 32;

	for (count = 0; count <= length; count++)
	{
		if (first % 2 == 0)
			printf("%lu", first);
		fibo = first + second;
		first = second;
		second = fibo;
		if (count != length || first % 2 != 0)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
