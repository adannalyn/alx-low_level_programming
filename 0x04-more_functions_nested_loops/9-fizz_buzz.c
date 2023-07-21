#include "main.h"
/**
 * main - print fizzbuzz
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if (count % 15 == 0)
		{
			printf("FizzBuzz");
			putchar(' ');
			continue;
		}
		else if (count % 5 == 0)
		{
			printf("Buzz");
			if (count == 100)
				break;
			putchar(' ');
			continue;
		}
		if (count % 3 == 0)
		{
			printf("Fizz");
			putchar(' ');
			continue;
		}
		printf("%d", count);
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
