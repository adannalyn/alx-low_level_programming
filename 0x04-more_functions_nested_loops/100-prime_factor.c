#include "main.h"
/**
 * main - entry point
 * Return: 0
 */

int main()
{
	long number = 612852475143, max_prime = -1, i;

	while (number % 2 == 0)
	{
		max_prime = 2;
		number /= 2;
	}
	for (i = 3; i <= sqrt(number); i+= 2)
	{
		while (number % i == 0)
		{
			max_prime = i;
			number /= i;
		}
	}
	if (number > 2)
		max_prime = number;

	printf("%ld\n", max_prime);

	return 0;
}
