#include "main.h"
/**
 * *string_toupper - change letters to uppercase
 * @str: character
 * Return: Always 0.
 */
char *string_toupper(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		if (str[count] >= 'a' && str[count] <= 'z')
			str[count] = str[count] - 32;
		count++;
	}
	return (str);
}
