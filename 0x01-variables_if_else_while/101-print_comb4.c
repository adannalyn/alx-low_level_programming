#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int count1, count2, count3;

	for (count1 = 0; count1 < 8; count1++)
	{
		for (count2 = count1; count2 < 9; count2++)
		{
			for (count3 = count1; count3 < 10; count3++)
			{
				if (count1 == count2 || count1 == count3 || count2 == count3)
					continue;
				putchar(count1 + '0');
				putchar(count2 + '0');
				putchar(count3 + '0');
				if (count1 == 7 && count2 == 8 && count3 == 9)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
