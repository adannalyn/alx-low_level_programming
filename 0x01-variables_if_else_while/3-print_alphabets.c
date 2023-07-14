#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int count1, count2;

	for (count1 = 'a'; count1 <= 'z'; count1++)
	{
		putchar(count1);
	}
	for (count2 = 'A'; count2 <= 'Z'; count2++)
	{
		putchar(count2);
	}
	putchar('\n');
	return (0);
}
