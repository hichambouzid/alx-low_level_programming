#include "main.h"
/**
 * create_file - function creat a file if not exist
 *
 * @filename: name of file
 * @text_content: text to write unsigned to file
 *
 * Return: 1 if succes -1 if faild
 */
int create_file(const char *filename, char *text_content)
{
	int file, i, j;

	if (!filename)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
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
