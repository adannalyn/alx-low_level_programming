#include "main.h"
/**
 * print_rev - print in reverse
 * @s: string
 */
int _strlen(char *str) {
  int count;

  while (*str != '\0') {
    count++;
  }
  return (count);
}
void print_rev(char *s) {
  int len, count;

  len = _strlen(s);
  for (count = len - 1; count >= 0; count--) {
    _putchar(s[count]);
  }
  _putchar('\n');
}
