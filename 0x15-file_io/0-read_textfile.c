#include "main.h"

/**
 * read_textfile - a function that reads a
 * text file and prints it to the POSIX standard output
 * @filename: of the file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	register int lets_open, _read,lets_write;
	register char *buffer = malloc(sizeof(char)  * letters);

	if (!(buffer))
	{
		free(buffer);
		return (0);
	}
	if (!(filename))
	{
		return (0);
	}
	lets_open = open(filename, O_RDONLY);
	_read = read(lets_open, buffer, letters);
	lets_write = write(STDOUT_FILENO, buffer, _read);

	if (lets_open == -1 || _read == -1 || lets_write == -1 || !(lets_write == _read))
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(lets_open);
	return (lets_write);
}

