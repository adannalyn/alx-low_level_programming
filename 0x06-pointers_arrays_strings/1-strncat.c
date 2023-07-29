#include "main.h"
/**
 * *_strncat - concatenate two strings
 * @dest: first string
 * @src: second string
 * @n: bytes
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	size_t dest_len = 0;
	int count;

	while (dest[dest_len] != 0)
		dest_len++;
	for (count = 0; count < n && src[count] != '\0'; count++ )
		dest[dest_len + count] = src[count];
	dest[dest_len + count] = '\0';
	return (dest);
}
