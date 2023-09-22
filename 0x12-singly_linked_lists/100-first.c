#include <stdio.h>
/**
 * first - prints a sentence before the main
 * function is executed
 * Return: 0
 */
void first(void)__attribute__((constructor));
{
	printf("You're beat! and yet, you must allow");
	printf("I bore my house upon my back!\n");
}
