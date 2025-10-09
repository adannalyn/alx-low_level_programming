#include "main.h"
/**
 * rot13 - Cipher
 * @str: string
 * Return: 0
 */
char *rot13(char *str)
{
	int i = 0;
	char current;

	while (str[i] != '\0')
	{
		current = str[i];

		if ((current >= 'A' && current <= 'Z') || (
			    current >= 'a' && current <= 'z'))
		{
			if ((current >= 'A' && current <= 'M') ||
			    (current >= 'a' && current <= 'm'))
				str[i] = current + 13;
			else
				str[i] = current - 13;
		}

		i++;
	}

	return (str);
}
