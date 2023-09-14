#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: a list of types of arguments
 */
void print_all(const char * const format, ...)
{
	const char *separator = "";
	char format_specifier;
	unsigned int i = 0;
	va_list args;
	va_start(args, format);

	if (format == NULL)
	{
		
		printf("\n");
	}
	for (i = 0; format[i]; i++)
	{
		format_specifier = format[i];

		if (format_specifier == 'c')
			printf("%s%c", separator, va_arg(args, int));
		else if (format_specifier == 'i')
			printf("%s%d", separator, va_arg(args, int));
		else if (format_specifier == 'f')
			printf("%s%f", separator, va_arg(args, double));
		else if (format_specifier == 's')
		{
			char *str = va_arg(args, char *);

			if (str == NULL)
				str = "(nil)";
			printf("%s%s", separator, str);
		}
		separator = ", ";
	}
	va_end(args);
	printf("\n");
}
