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
	int f, r, w;
	char *buff = malloc(sizeof(char) * letters);

	if (filename == NULL)
	{
		return (0);
	}

	f = open(filename, O_RDWR);
	if (f == -1)
	{
		return (0);
	}
	r = read(f, buff, letters);
	if (r == -1)
	{
		return (0);
	}
	w = write(STDOUT_FILENO, buff, r);
	if (w == -1)
	{
		return (0);
	}
	close(f);
	free(buff);
	return (w);
}
