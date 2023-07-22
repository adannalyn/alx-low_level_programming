#include "main.h"
/**
 * main - prime factors of 1231952
 *
 * Return: Always 0.
 */
int main(void)
{
	int prime;

	for (prime = 0; prime < 1231952; prime++)
	{
		if (1231952 % prime)
		{
			printf("%d", prime);
		}
	}
	return (prime);
}
