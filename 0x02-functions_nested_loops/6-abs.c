#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @d: Number to be computed
 * Returns: value of d
*/

int _abs(int d)
{
	if (d < 0)
	{
		int abs_value;

		abs_value = d * -1;
		return (abs_value);
	}
	return (d);
}
