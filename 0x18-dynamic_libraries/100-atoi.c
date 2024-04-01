#include "main.h"
int _atoi(char *s) 
{
        int sign = 1;
        int result = 0;

        // Skip leading whitespace
        while (*s == ' ') {
                s++;
        }

        // Check for sign
        if (*s == '-') {
                sign = -1;
                s++;
        } else if (*s == '+') {
                s++;
        }

        // Convert digits to integer
        while (*s >= '0' && *s <= '9') {
                result = result * 10 + (*s - '0');
                s++;
        }

        return sign * result;
}