#include "main.h"
/**
 * main - this is the entry point
 * @argc: count
 * @argv: pointer
 * Return: 0
 */
void print_string(char *str)
{
    while (*str != '\0')
    {
        putchar(*str);
        str++;
    }
}

int main(int argc, char *argv[])
{
    int count;

    if (argc)
    {
	    for (count = 0; count < argc; count++)
	    {
		    print_string(argv[count]);
            putchar('\n');
	    }
    }
    return (0);
}
