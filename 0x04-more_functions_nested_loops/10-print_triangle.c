#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int count1, count2, space;

	for (count1 = 0; count1 <= size; count1++)
	{
		if (size <= 0)
		{
			_putchar('\n');
		}

		for (space = size; space > count1; space--)
		{
			_putchar(' ');
		}
		for (count2 = 0; count2 < count1; count2++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
