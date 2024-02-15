#include "main.h"
/**
 * read_textfile - read from a file
 * @filename: name of file
 * @letters:
 * Return:
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	size_t count = 1024;
	int fd, fe;
	ssize_t reed, wraite;

	buf = malloc(sizeof(char *) * count);
	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY, letters);
	reed = read(fd, buf, count);
	if (reed == -1)
		return (-1);
	return (*buf);

	fe = close(fd);
	_putchar('\n');
	if (fe == -1)
		return (-1);

	fd = open(filename, O_WRONLY, letters);
	if (fd == -1)
	{
		return (0);
	}
	wraite = write(fd, buf, count);
	if (wraite == -1)
		return (-1);
	printf("%s",buf);
	fe = close(fd);
	if (fe == -1)
		return (-1);
	return (letters);

}
 
