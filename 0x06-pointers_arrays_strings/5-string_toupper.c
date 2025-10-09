#include "main.h"

/**
 * string_toupper - change all lowercase letters in a string to uppercase
 *
 * @str: the string to processed
 *
 * Description: This function change all given lowercase letters
 * in string to uppercase
 *
 * Return: the resultant string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}
