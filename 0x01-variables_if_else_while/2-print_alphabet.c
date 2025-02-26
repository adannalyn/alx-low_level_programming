#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	char count;
	for (count = 'a'; count < 'z'; count++)
		putchar(count);
	putchar('\n');
	return (0);
}
