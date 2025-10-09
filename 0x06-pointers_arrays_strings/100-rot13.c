#include "main.h"
/**
 * rot13 - Cipher
 * @str: string
 * Return: 0
 */
char *rot13(char *str)
{
	int i = 0;
	char c;

	while (str[i] != '\0')
	{
		c = str[i];
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		{
			if ((c >= 'A' && c <= 'M') || (c >= 'a' && c <= 'm'))
			{
				str[i] = c + 13;
			}
			else
			{
				str[i] = c - 13;
			}
		}
		i++;
	}
	return (str);
}
