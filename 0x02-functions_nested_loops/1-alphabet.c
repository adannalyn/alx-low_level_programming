#include "main.h"
/**
 * print_alphabet - to print the alphabets in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	int count;

	for (count = 'a'; count <= 'z'; count++)
		_putchar(count);
	_putchar('\n');
}
