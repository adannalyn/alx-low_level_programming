#include "main.h"
/**
 * swap_int - swap two integers
 * @a: first integer
 * @b: second integer
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
