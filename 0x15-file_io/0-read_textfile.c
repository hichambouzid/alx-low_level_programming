#include "main.h"
/**
 * read_textfile - function read the countent of file and write them
 *
 * @filename: pointer to file
 * @letters: size we want to read
 *
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t readp;
	int file;
	char *print;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	print = malloc(sizeof(char) * letters);
	if (!print)
		return (0);
	readp = read(file, print, letters);
	if (readp == -1)
		return (-1);
	write(STDOUT_FILENO, print, readp);

	return (readp);
}