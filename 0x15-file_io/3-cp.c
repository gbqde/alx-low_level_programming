#include "main.h"

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file the buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer, or exits on failure.
 */


char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}



/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to be closed.
 *
 * Description: Closes a file descriptor and exits with an error message if the
 *		file cannot be closed.
 */


void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: Copies the contents of the file specified in file_from to the
 *		file specified in file_to. Exits with an error message if the
 *		number of arguments is incorrect, if file_from cannot be read,
 *		or if file_to cannot be created or written to.
 */


int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{

