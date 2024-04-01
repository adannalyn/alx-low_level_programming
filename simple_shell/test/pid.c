#include "main.h"
#include <unistd.h>

int main(void)
{
	pid_t ppid;

	ppid = getppid();
	printf("%d", ppid);

	return (0);
}
