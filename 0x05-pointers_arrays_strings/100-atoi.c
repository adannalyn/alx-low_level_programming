#include "main.h"
/**
 * _atoi - string to integer
 * @s: string
 * Return: 0
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int started = 0;
	int digit;

	while (*s)
	{
		if (*s == '-' && !started)
			sign *= -1;
		else if (*s == '+' && !started)
		{
		}
		else if (*s >= '0' && *s <= '9')
		{
			started = 1;
			digit = *s - '0';

			if (result > INT_MAX / 10 ||
			    (result == INT_MAX / 10 && digit > INT_MAX % 10))
			{
				return ((sign == 1) ? INT_MAX : INT_MIN);
			}
			result = result * 10 + digit;
		}
		else if (started)
			break;
		s++;
	}
	return (result * sign);
}
