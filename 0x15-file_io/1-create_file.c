#include "main.h"
/**
 *create_file - creates a file
 *@filename:the name of the file
 *@text_content:the text to write in the file
 *Return:1 on sucess or -1 on failure
 *
 */
int	create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		w = write(fd, text_content, strlen(text_content));
		if (w == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
