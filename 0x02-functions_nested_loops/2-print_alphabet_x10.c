#include "main.h"
/**
 * print_alphabet_x10 - to print the alphabets in lowercase
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int count1, count2;

	for (count1 = 0; count1 < 10; count1++)
	{
		for (count2 = 'a'; count2 <= 'z'; count2++)
			_putchar(count2);
		_putchar('\n');
	}
}
