#include "main.h"
/**
 * _abs - absolute value of an integer
 * @absolute: check for absolute value
 * Return: 0
 */
int _abs(int absolute)
{
	if (absolute < 0)
	{
		return (-absolute);
	}
	else
	{
		return (absolute);
	}
	return (0);
}