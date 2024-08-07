#include "main.h"
#include <string.h>

/**
* append_text_to_file - appends text to the end of file
* @filename: name of file
* @text_content: string to add at the end of file
* Return: 1 | -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	n_written = write(fd, text_content, strlen(text_content));
	if (n_written == -1)
		return (-1);

	close(fd);

	return (1);
}
