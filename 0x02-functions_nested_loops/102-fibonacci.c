#include "main.h"
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int count, fibo = 1, first = 0, second = 1;

	for (count = 0; count < 50; count++)
	{
		printf("%d\n", first);
		fibo = first + second;
		first = second;
		second = fibo;
	}
	return (0);
}
