#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: The number to check
 *
 * Return: The absolute value of n
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);
	else
		return (0);
}
