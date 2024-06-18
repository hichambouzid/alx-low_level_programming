#include "main.h"

/**
 * read_textfile- function read from file name
 * and print a specific number of
 * letters.
 *
 * @filename: name of file
 *
 * @letters: size
 *
 * Return: if succes return deff 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	int fd;
	char *str;

	fd = open(filename, O_RDONLY);
	if (fd < 0 || !filename)
		return (0);
	str = malloc(sizeof(char) * (letters + 1));
	if (!str)
		return (0);
	i = read(fd, str, letters);
	if (i < 0)
	{
		free(str);
		return (0);
	}
	str[i] = 0;
	if (write(1, str, i) < 0)
	{
		free(str);
		return (0);
	}
	return (i);
}

