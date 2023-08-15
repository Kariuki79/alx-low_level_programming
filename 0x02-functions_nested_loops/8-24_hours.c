#include "maun.h"

/**
 * jack_bauer - prints every minute of the day
*/

void jack_bauer(void)
{
	int min;
	int i;

	min = 60 * 24;

	for (i = 1; i <= min; i++)
	{
		_putchar(i + '0');
	}
}
