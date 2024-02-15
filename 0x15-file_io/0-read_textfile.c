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
	size_t count = 100;
	int fd, fe;
	ssize_t reed, wraite;

	buf = malloc(sizeof(char *) * count);
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
	while (reed != 0)
	{
		if (reed == -1)
			return (-1);
		printf("%s", buf);
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
