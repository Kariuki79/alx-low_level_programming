#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to power y
 * @x: value you to be raised by power y
 * @y: power
 * Return: -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
