#include "main.h"
/**
 * leet - encode a string
 * @str: string
 * Return: 0
 */
char *leet(char *str)
{
	char *ptr = str;
	char leet_map_lower[] = "aeotl";
	char leet_map_upper[] = "AEOTL";
	char leet_replace[] = "43071";
	int i, j;

	for (i = 0; ptr[i] != '\0'; i++)
	{
		for (j = 0; leet_map_lower[j] != '\0'; j++)
		{
			if (ptr[i] == leet_map_lower[j] || ptr[i] == leet_map_upper[j])
			{
				ptr[i] = leet_replace[j];
				break;
			}
		}
	}
	return (ptr);
}
