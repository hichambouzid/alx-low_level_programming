#include "main.h"
/**
 * ft_cp - function copie the countent of a file to other file
 *
 * @file_from: first input
 * @file_to: second input
 *
 * Return: -1 or 1
 */
int ft_cp(const char *file_from, const char *file_to)
{
	int i, j, count, e, f;
	char *ptr;

	i = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR |
			S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	f = open(file_from, O_RDONLY);

	if (i == -1)
		return (-1);
	count = 0;
	while (file_from[count])
		count++;
	ptr = malloc(sizeof(char) * (count));
	if (!ptr)
		return (-1);
	j = read(f, ptr, count);
	if (j == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(99);
	}
	e = write(i, ptr, count);
	if (e == -1 || e != count)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	e = close(i);
	if (e == -1)
	{
		write(2, "Error: Can't close fd FD_VALUE\n",
				sizeof("Error: Can't close fd FD_VALUE\n"));
		exit(100);
	}
	free(ptr);
	return (1);
}
/**
 * main - test the code
 *
 * @argc: number of argument
 * @argv: arguments
 * Return: always 0
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n",
				sizeof("Usage: cp file_from file_to\n"));
		exit(97);
	}
	else
		ft_cp(argv[1], argv[2]);
	return (0);
}
