#include <unistd.h>
#include <string.h>
/**
 * main - Entry point
 *
 * A program that prints a string followed by a new line to the standard error
 *
 * Return: 1 (to indicate an error)
 */
int main(void)
{
	const char *message =
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	size_t length = strlen(message);

	write(STDERR_FILENO, message, length);
	return (1);
}
