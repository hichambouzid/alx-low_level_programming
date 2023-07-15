
#include<unistd.h>
 #include <fcntl.h>
#include <sys/types.h>
#include <stddef.h>
#include "main.h"
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, count, i, ret_w;
	char buff[2];

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	i = 0;
	while (i < 2)
	{
		buff[i] = 0;
		i++;
	}
	i = letters;
	rd = -1;
	count = 0;
	while (i > 0 && (size_t)count < letters)
	{
		rd = read(fd, buff, 1);
		if (rd == 0)
			break ;
		if (rd != -1)
			ret_w = write(STDOUT_FILENO, buff, rd);
		if (rd ==-1 || ret_w != rd)
		{
			close(fd);
			return (0);
		}
		count += rd;
		i -= rd;
	}
	close(fd);
	return (count);
}

