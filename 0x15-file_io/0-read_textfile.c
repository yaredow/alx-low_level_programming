#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * read_textfile - reads a certain amount of letters from a file
 * @filename: name of file
 * @letters: how many letters to read
 * Return: the number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	/* declarations */
	int fd, retVal, writeVal;
	char *buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL || filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(buffer);
		return (0);
	}
	retVal = read(fd, buffer, letters);
	if (retVal < 0)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	writeVal = write(STDOUT_FILENO, buffer, retVal);
	if (writeVal < 0 || writeVal != retVal)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (retVal);
}
