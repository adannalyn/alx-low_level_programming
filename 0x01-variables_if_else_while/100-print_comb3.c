#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int count1, count2;

	for (count1 = 0; count1 < 9; count1++)
	{
		for (count2 = count1; count2 < 10; count2++)
		{
			if (count1 == count2)
				continue;
			putchar(count1 + '0');
			putchar(count2 + '0');
			if (count1 == 8 && count2 == 9)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
