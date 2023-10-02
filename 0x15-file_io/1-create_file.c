#include "main.h"
#include <stddef.h>
/**
 * _strlen - counts the length of the string
 * @str: used string
 * Return: length of the string
 */
int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
		length++;
	return (length);
}

/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: null terminated string to write
 * Return: (1) on success, (-1) on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, written;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		written = write(file, text_content, _strlen(text_content));
		if (written == -1)
		{
			close(file);
			return (-1);
		}
		close(file);
		return (1);
	}
	else
	{
		close(file);
		return (1);
	}
}
