#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

size_t tokenize(char *str, char *delim)
{
  size_t words_count = 0;

  if (strtok(str, delim) !=NULL)
  {
    ++words_count;
  }

  while (strtok(NULL, delim) != NULL)
  {
    ++words_count;
  }

  return words_count;
}

char **word_list(char *str, char *delim)
{
  char **arr = NULL;
  size_t arr_iter = 0;
  size_t arr_size = 0;
  size_t str_size = strlen(str);
  char prev_char ='\0';

  arr_size = tokenize(str, delim) + 1;
  arr = malloc(sizeof(char *) * arr_size);

  for(size_t str_iter = 0; str_iter < str_size; ++str_iter)
  {
    if (str[str_iter] != '\0' && prev_char == '\0')
    {
      arr[arr_iter] = str + str_iter;
      ++arr_iter;
    }
    prev_char = str[str_iter];
  }

  arr[arr_iter] = NULL;

  return (arr);
}

int main(void)
{
  char *str = malloc(24);
  char *delim = " ";

  char **arr;
  strcpy(str, "Hello World How Are You");

  arr = word_list(str, delim);

  for(int i = 0; arr[i] != NULL; ++i)
  {
    printf("%s, %d\n", arr[i], arr + i);
  }
  return (0);
}
