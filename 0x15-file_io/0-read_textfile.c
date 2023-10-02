#include "main.h"
#include <stddef.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file name
 * @letters:  number of letters to be printed
 * Return: number of letters it could read and print
 * return 0 if filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, _read, wrote;
	char *buffer;

	buffer = malloc(sizeof(*buffer) * (letters + 1));
	if (filename == NULL || buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	_read = read(file, buffer, letters);
	if (_read == -1)
		return (0);
	buffer[_read] = '\0';
	wrote = write(STDOUT_FILENO, buffer, _read);
	if (wrote != _read)
		return (0);
	free(buffer);
	close(file);
	return (_read);
}
