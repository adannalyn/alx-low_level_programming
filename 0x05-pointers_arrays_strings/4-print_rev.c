#include "main.h"
/**
 * print_rev - print in reverse
 * @s: string
 */
void print_rev(char *s) {
  int len, count;

  len = strlen(s);
  for (count = len - 1; count >= 0; count--) {
    _putchar(s[count]);
  }
  _putchar('\n');
}
