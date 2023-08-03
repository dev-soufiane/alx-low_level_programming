#include "main.h"

/**
 * is_prime - Check if a number is prime
 * @n: The number to check
 * @divisor: The current divisor being checked
 * Return: 1 if the number is prime, 0 otherwise
 */

int is_prime(int n, int divisor)
{
	if (n < 2 || n % divisor == 0)
		return (0);

	else if (divisor * divisor > n)
		return (1);

	else
		return (is_prime(n, divisor + 1));
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to check
 * Return: 1 if the number is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
