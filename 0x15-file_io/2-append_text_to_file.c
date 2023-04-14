#include "main.h"
/**
 * append_text_to_file - function
 *
 * @filename: input
 * @text_content: input
 *
 * Return: 0 || 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, i, j;

	if (!filename)
		return (-1);
	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		i = 0;
		while (text_content[i])
			i++;
		j = write(file, text_content, i);
		if (j == -1)
			return (-1);
	}
	close(file);
	return (1);
}
