#include "main.h"
/**
 * main - entry point
 */
int main(void)
{
	int count, three;

	for (count = 1; count < 1024; count++)
	{
		if (count % 3 == 0 || count % 5 == 0)
		{
			three += count;
		}
	}
	printf("%d\n", three);
	return (0);
}
