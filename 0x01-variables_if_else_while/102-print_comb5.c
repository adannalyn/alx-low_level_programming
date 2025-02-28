#include <stdio.h>
/**
 * main - entry point
 * Description: prints all possible combinations of two two-digit numbers.
 * Return: 0
 */

int main(void)
{
	int first, second, third, fourth;

	for (first = 0; first < 10; first++)
	{
		for (second = 0; second < 9; second++)
		{
			for (third = first; third < 10; third++)
			{
				for (fourth = second; fourth < 10; fourth++)
				{
					putchar(first + '0');
					putchar(second + '0');
					putchar(' ');
					putchar(third + '0');
					putchar(fourth + '0');
					if (first == 9 && second == 8 &&
					    third == 9 && fourth == 9)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
