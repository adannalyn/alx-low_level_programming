#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - entry point
 *
 * Return: 0
 */

void positive_or_negative(int i)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", i);
	else if (n == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
