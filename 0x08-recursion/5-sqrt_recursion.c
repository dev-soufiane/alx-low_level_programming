#include "main.h"

/**
 * sqrtHelper - Calculating the square root recursively
 * @n: The number to calculate the square root of
 * @guess: The current guess for the square root
 *
 * Return: The square root of n or -1 if it is not a perfect square
 */

int sqrtHelper(int n, int guess)
{
	int square = guess * guess;

	if (square == n)
	{
		return (guess);
	}

	else if (square < n)
	{
		return (sqrtHelper(n, guess + 1));
	}

	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - Calculates the square root of a number recursively
 * @n: The number to calculate the square root of
 *
 * Return: The square root of n or -1 if it is not a perfect square
 */

int _sqrt_recursion(int n)
{
	return (sqrtHelper(n, 1));
}
