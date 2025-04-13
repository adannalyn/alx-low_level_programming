#include "main.h"
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	unsigned long count, first = 2, second = 3, fibo = 0, result = 0, length = 32;

	for (count = 0; count <= length; count++)
	{
		if (first % 2 == 0)
		{
			result += first;
		}
		fibo = first + second;
		first = second;
		second = fibo;
	}
	printf("%lu", result);
	putchar('\n');
	return (0);
}
