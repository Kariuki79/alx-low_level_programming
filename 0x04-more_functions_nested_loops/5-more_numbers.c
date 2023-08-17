#include "main.h"
/**
 * more_numbers - prints 0 - 14 10 times
 * @a: to loop 10 times
 * @b: to loop to 14
*/
void more_numbers(void)
{
	int a, b;

	a = 0;
	while (a <= 10)
	{
		b = 0;
		while (b <= 14)
		{
			_putchar(b + '0');
			b++;
		}
		_putchar('\n');
		a++;
	}
	_putchar('\n');
}
