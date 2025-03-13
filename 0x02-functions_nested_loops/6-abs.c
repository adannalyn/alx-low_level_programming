#include "main.h"
/**
 * _abs - absolute value of an integer
 * @n: integer
 * Return: 0
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		n = -n;
		return (n);
	}
	return (0);
}
