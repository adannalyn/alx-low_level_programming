#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
  char *str;
  int i;

  str = malloc(sizeof(char));
  
  strcpy(str, "Hello World!");

  for (i = 0; str[i] != '\0'; i++)
  {
  	printf("%d |", str[i]);
  }
  strtok(str, " ");
  printf("%s\n", str);
  
  return (0);
}
