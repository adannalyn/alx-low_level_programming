#include "main.h"
char *_strcat(char *dest, char *src) 
{
        char *ptr = dest;

    // Find the end of the destination string
        while (*ptr != '\0') 
        {
                ptr++;
        }

    // Append the source string to the destination string
        while (*src != '\0') 
        {
                *ptr = *src;
                ptr++;
                src++;
        }

    // Null-terminate the concatenated string
        *ptr = '\0';

        return dest;
}
