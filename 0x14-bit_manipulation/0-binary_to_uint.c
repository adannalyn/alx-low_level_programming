#include "main.h"
/**
 * binary_to_uint - convert a binary number to unsigned int
 * @b: pointer to binary
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int count = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b == '0')
		{
			count <<= 1;
		}
		else if (*b == '1')
		{
			count = (count << 1) | 1;
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (count);
}
