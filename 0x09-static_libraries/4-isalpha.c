#include "main.h"
/**
 * _isalpha - checks for alphabet for uppercase
 * @c: alphabet
 * Return: 1 if the letter was uppercase; 0 if it wasn't
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}