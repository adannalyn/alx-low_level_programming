#include "main.h"
/**
 * *_strcat - concatenate strings
 * @dest: first string
 * @src: second string
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int count1 = 0, count2 = 0;

	while (dest[count1] != '\0')
	{
		count1++;
	}
	while ((dest[count1++] = src[count2++]) != '\0')
	{
		;
	}
	return (dest);
}
