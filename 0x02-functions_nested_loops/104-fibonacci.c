#include "main.h"
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	unsigned long count, fibo = 0, first = 1, second = 2, length = 98;

	for (count = 1; count <= length; count++)
	{
		printf("%lu", first);
		fibo = first + second;
		first = second;
		second = fibo;

		if (count != length)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
