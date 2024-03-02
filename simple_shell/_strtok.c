#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  char *str;
  char *delim;
  int i = 0;
  char *ptr;

  str = malloc(sizeof(char));
  delim = " ";
  strcpy(str, "Hello World how are you");

  for (i = 0; i != 24; i++)
  {
    printf("%c | ", str[i]);
  }
  putchar(10);

  ptr = strtok(str, delim);
  printf("%c\n", *ptr);

  while ((ptr = strtok(NULL, delim)) != NULL)
  {
    printf("%c\n", *ptr);
  }

  for (i = 0; i != 24; i++)
  {
    printf("%c - ", str[i]);
  }
  putchar(10);

  return (0);
}
