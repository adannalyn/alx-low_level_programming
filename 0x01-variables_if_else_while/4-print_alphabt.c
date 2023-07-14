#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int count;

	for (count = 'a'; count <= 'z'; count++)
	{
		if (count == 'q' || count == 'e')
		{
			continue;
		}
		putchar(count);
	}
	putchar('\n');
	return (0);
}
