#include "main.h"
/**
 * main - entry point
 */
int main(void)
{
	int jbl;

	for (jbl = 1; jbl <= 100; jbl++)
	{
		if (jbl % 15 == 0)
			printf("FizzBuzz ");
		else if (jbl % 3 == 0)
			printf("Fizz ");
		else if (jbl % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", jbl);
	}
	putchar('\n');
	return (0);
}
