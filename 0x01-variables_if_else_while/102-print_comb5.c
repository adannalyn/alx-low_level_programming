#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int count1, count2;

	for (count1 = 0; count1 < 99; count1++)
	{
		for (count2 = count1; count2 < 100; count2++)
		{
			if (count1 == count2)
			{
				continue;
			}
			putchar((count1 / 10) + '0');
			putchar((count1 % 10) + '0');
			putchar(' ');
			putchar((count2 / 10) + '0');
			putchar((count2 % 10) + '0');
			if (count1 == 98 && count2 == 99)
				break;
			putchar (',');
			putchar (' ');
		}

	}
	putchar ('\n');
	return (0);
}
