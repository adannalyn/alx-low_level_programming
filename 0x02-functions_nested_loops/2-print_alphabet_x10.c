#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int alpha, count;

	for (count = 0; count <= 9; count++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
	_putchar('\n');
	}

}
