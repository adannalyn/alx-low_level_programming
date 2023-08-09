#include "main.h"
/**
 * *create_array - create an array using malloc
 * @size: size of char
 * @c: character
 * Return: 0
*/
char *create_array(unsigned int size, char c)
{
    char *chase;
       chase = (char *) malloc(size * sizeof(char));
       _putchar(*chase);
       return (chase);
}
