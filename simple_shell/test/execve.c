#include <unistd.h>
#include <stdio.h>

int main(void)
{
  char *argv[] = {"/bin/pwd", NULL};
  int return_value;

  printf("Before call of execve\n");

  return_value = execve(argv[0], argv, NULL);

  if (return_value)
    printf("Execve has failed\n");
  printf("After call of execve\n");

  return (0);
}
