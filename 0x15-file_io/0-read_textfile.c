#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it
 * @filename: pointer that the file reads
 * @letter: this are numbs that the letters should read and rite
 * Return: read and print letter
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t reed, rite;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	reed = read(fd, buf, letters);
	close(fd);

	if (reed == -1)
	{
		free(buf);
		return (0);
	}

	rite = write(STDOUT_FILENO, buf, letters);
	free(buf);

	if (reed != rite)
		return (0);

	return (rite);
}
