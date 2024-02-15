#include "main.h"
/**
 * read_textfile - read from a file
 * @filename: name of file
 * @letters:
 * Return:
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buf[100];
	int count = 100;
	int fd;
	ssize_t reed;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDWR, letters);
	if (fd == -1)
	{
		return (0);
	}
	reed = read(fd, buf, count);
	while (reed != '\0')
	{
		printf("%ld", reed);
	       reed++;
	}
	write(fd, buf, count);
	close(fd);
	return (letters);
}
