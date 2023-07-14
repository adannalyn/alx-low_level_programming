#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int count;

	for (count = 0; count <= 9; count++)
	{
		putchar(count + '0');
	}
	for (count = 'a'; count <= 'f'; count++)
        {
                putchar(count);
        }
	putchar('\n');
	return (0);
}
