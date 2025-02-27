#include <stdio.h>
/**
 * main - entry point
 * Description: Write a program that prints all possible different combinations
 * Return: 0
 */

int main(void)
{
	int number, numbers;

	for (number = '0'; number <= '8'; number++)
	{
		for (numbers = '1'; numbers <= '9'; numbers++)
		{
			if (numbers == number)
				continue;
			putchar(number);
			putchar(numbers);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
