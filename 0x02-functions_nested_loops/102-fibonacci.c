#include "main.h"
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int count, fibo = 0, first = 1, second = 2;

	for (count = 1; count < 50; count++)
	{
		printf("%d", first);
		fibo = first + second;
		first = second;
		second = fibo;

		if (count != 49)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
