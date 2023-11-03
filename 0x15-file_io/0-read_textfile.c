#include "main.h"
/**
 *read_textfile - reads text frm a file
 *@filename:the name of the file
 *@letters:the number of letter we going to read from that file
 *Return:the actual number of letters it could read and print
 *
 *
 *
 */
ssize_t	read_textfile(const char *filename, size_t letters)
{
	ssize_t r, w;
	char *buffer;
	int fd;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	r = read(fd, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1 || w != r)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (w);



}
