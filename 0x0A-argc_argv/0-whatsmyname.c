#include "main.h"
/**
 * main - entry point
 * @argc: count
 * @argv: pointer
 * Return: 0
*/
int main(int argc, char *argv[])
{
    int count;

    if (argc > 0)
    {
        for (count = 0; count < argc; count++)
        {
            _putchar(*argv[count]);
        }
        _putchar('\n');
    }
    return (0);
}
