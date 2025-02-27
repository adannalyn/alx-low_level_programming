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
		for (numbers = number + 1; numbers <= '9'; numbers++)
		{
			putchar(number);
			putchar(numbers);
			if (number == '8' && numbers == '9')
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
