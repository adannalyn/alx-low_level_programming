#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
  char buffer[100];
  int bytes_read;
  pid_t pid;
  while(1)
  {
    write (STDOUT_FILENO, "$ ", 2);
    bytes_read = read(STDIN_FILENO, buffer, sizeof(buffer));

    if(bytes_read == 0)
      break;
  }

  buffer[bytes_read - 1] = '\0';

  pid = fork();

  if (pid < 0)
  {
    perror("fork");
  }
  else if (pid == 0)
  {
    if (execve(buffer, NULL, NULL) == -1)
    {
      perror("execve");
    }
    _exit(EXIT_FAILURE);
  }
  else
  {
    wait(NULL);
  }
  return (0);
}
