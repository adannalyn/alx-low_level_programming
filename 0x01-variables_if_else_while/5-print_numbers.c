#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int count;

	for (count = 0; count <= 9; count++)
		putchar(count + '0');
	putchar('\n');
	return (0);
}
