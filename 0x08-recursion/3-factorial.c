#include "main.h"

/**
 * factorial - Calculates the factorial of a given number
 * @n: The number for which factorial is to be calculated
 *
 * Return: The factorial of the given number,
 * or -1 if an error occurs.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}
