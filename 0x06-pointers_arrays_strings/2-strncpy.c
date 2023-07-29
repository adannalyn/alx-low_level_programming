#include "main.h"
/**
 * *_strncpy - copies a string
 * @dest: first
 * @src:
 * @n: bytes
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; count < n && src[count] != '\0'; count++)
		dest[count] = src[count];
	for ( ; count < n; count++)
		dest[count] = '\0';
	return (dest);
}
