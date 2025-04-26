#include "main.h"
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	unsigned long first = 1, second = 2;
	unsigned long third = 0, fourth = 0;
	int count, length = 98;
	unsigned long temp_low, temp_high;

	printf("1, 2");;
	for (count = 2; count < length; count++)
	{
		temp_low = first + second;
		temp_high = third + fourth;
		if (temp_low >= 1000000000)
		{
			temp_low -= 1000000000;
			temp_high += 1;
		}
		if (temp_high > 0)
			printf(", %lu%09lu", temp_high, temp_low);
		else
			printf(", %lu", temp_low);
		first = second;
		second = temp_low;
		third = fourth;
		fourth = temp_high;
	}
	putchar('\n');
	return (0);
}
