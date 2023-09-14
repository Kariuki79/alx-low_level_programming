#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: a list of types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int a = 0, b, c = 0;
	char *str;
	const char d_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[])
	{
		j = 0;
		while (d_arg[b])
		{
			if (format[a] == d_arg[b] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[a])
		{
		case 'c':
			printf("%c", va_arg(valist, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(valist, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(valist, double)), c = 1;
			break;
		case 's':
			str = va_arg(valist, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
		} a++;
	}
	printf("\n"), va_end(valist);
}
