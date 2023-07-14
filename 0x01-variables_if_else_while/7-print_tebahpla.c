#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int count;

	for (count = 'z'; count >= 'a'; count--)
		putchar(count);
	putchar('\n');
	return (0);
}
