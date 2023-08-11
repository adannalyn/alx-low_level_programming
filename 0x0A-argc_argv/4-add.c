#include "main.h"
/**
* main - entry point
* @argc: count
* @argv: pointer
* Return: 0
*/

int _atoi(char s[])
{
	int i, n, sign;

	for (i = 0; isspace(s[i]); i++)
		;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	for (n = 0; s[i] >= '0' && s[i] <= '9'; i++)
		n = 10 * n + (s[i] - '0');
	return (sign * n);
}

int main(int argc,char *argv[])
{
	int count = 0, sum = 0;

	if (argc >= 2)
	{
		if (*argv[count] >= 48 && *argv[count] <= 58)
		{
			printf("Error");
		}
		else
		{
			for (count = 1; count < argc; count++)
			{
				sum += _atoi(argv[count]);
			}
			printf("%d",sum);
			_putchar('\n');
		}
	}
	else if (argc == 1)
	{
		_putchar('0');
		_putchar('\n');
	}

	return (0);
}
