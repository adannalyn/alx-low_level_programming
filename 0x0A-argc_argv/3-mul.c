#include "main.h"
/**
 * main - entry point
 * @argc: count
 * @argv: pointer
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count;
	int sum;
	int mul1, mul2;

	if (argc < 2)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (1);
	}
	if (argc)
	{
		for (count = 1; count < argc; count++)
		{
			mul1 = atoi(argv[1]);
			mul2 = atoi(argv[2]);
			sum = mul1 * mul2;
		}
		printf("%d", sum);
		putchar('\n');
	}
	return (0);
}
