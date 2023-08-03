#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: The base number
 * @y: The exponent
 *
 * This function calculates the value of x
 * raised to the power of y recursively.
 * If y is lower than 0, the function returns -1.
 *
 * Return: The result of x raised to the power of y,
 * or -1 if y is lower than 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y == 1)
	{
		return (x);
	}

	else if (y == 0)
	{
		return (1);
	}

	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
