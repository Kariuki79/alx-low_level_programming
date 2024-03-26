#include <stdio.h>

/**
 * main- entry point of the program
 *
 * Description: A program that prints the alphabet in lowercase, then in
 * uppercase followed by a newline
 *
 * Return: 0 upon successful execution
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
