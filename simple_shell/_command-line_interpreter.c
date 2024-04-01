#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>

int main(void)
{
	char buffer[100];
	pid_t pid;
	int bytes_read;

	while(1)
	{
		write(STDOUT_FILENO, "$ ", 2);
		bytes_read = read(STDIN_FILENO, buffer, sizeof(buffer));
		if (bytes_read == 0)
		{
			break;
		}
		buffer[bytes_read - 1] = '\0';
	}

	pid = fork();

	if (pid < 0)
	{
		perror("fork");
	}
	else if (pid == 0)
	{
		char *args[] = {buffer, NULL};
		if (execve(buffer, args, NULL) == -1)
		{
			perror("execve");
		}
	}
	_exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
	return (0);
}
