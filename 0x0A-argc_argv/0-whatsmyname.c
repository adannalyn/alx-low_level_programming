#include "main.h"
/**
 * print_string - print string
 * @str: string
*/
void print_string(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}

/**
 * main - entry point
 * @argc: count
 * @argv: pointer
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count;

	if (argc)
	{
		for (count = 0; count < argc; count++)
		{
			print_string(argv[count]);
		}
		_putchar('\n');
	}
	return (0);
}
