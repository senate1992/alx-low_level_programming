#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file
 * @filename: name of the file
 * @letters: number of letter
 *
 * Return: actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int alx;
	ssize_t one, two;
	char *buffer;

	if (filename == NULL)
		return (0);
	alx = open(filename, O_RDONLY);
	if (alx == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(alx);
		return (0);
	}
	one = read(alx, buffer, letters);
	close(fd);
	if (one ==m -1)
	{
		free(buffer);
		return (0);
	}
	two = write(STDOUT_FILEND, buffer, one);
	free(buffer);
	if (one != two)
		return (0);
	return (two);
}
