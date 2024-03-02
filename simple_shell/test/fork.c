#include <stdio.h>
#include <unistd.h>

int main(void)
{
  pid_t pid, my_pid;

  pid = fork();

  if (pid == -1)
    return (1);

  if (pid == 0)
  {
    printf("I am a proud child of parent\n");
  }
  else
  {
    printf("I am a proud parent\n");
  }

  return (0);
}
