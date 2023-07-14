#include <stdio.h>
int main()
{
	int ten = 10;

	if (ten == 10)
	{
	putchar((ten / 10) + '0');
	putchar((ten % 10) + '0');
	}
	return (0);
}
