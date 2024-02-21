#include "main.h"
/**
 * read_textfile - read from a file
 * @filename: name of file
 * @letters: mode
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd, fe;
	ssize_t reed, wraite;

	if (filename == NULL)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	reed = read(fd, buf, letters);
	if (reed == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	fe = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fe == -1)
	{
		free(buf);
		close(fe);
		return (0);
	}
	wraite = write(fe, buf, reed);
	if (wraite == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);
	return (reed);

}
 
