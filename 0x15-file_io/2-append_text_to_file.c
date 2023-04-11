#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 *
 * @filename: Name of the file
 * @text_content: String to add to the end of the file
 *
 * Return: 1 on success, -1 on failure
 *
 * Project by: @gbqde C12
 *
 */


int append_text_to_file(const char *filename, char *text_content)

{
	int fd, len = 0, bytes_written;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	bytes_written = write(fd, text_content, len);
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
