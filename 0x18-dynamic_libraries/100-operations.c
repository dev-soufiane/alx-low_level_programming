#include <stdio.h>

/**
 * add - Adds two numbers.
 * @a: first integer
 * @b: second integer
 *
 * Return: The sum of two numbers.
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts two numbers.
 * @a: first integer
 * @b: second integer
 *
 * Return: The difference between two numbers.
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two numbers.
 * @a: first integer
 * @b: second integer
 *
 * Return: The product of two numbers.
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides two numbers.
 * @a: first integer
 * @b: second integer
 *
 * Return: The division result of two numbers,
 *        Or -1 if the divisor is 0.
 */

int div(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a / b);
}

/**
 * mod - Calculates the modulus of two numbers.
 * @a: first integer
 * @b: second integer
 *
 * Return: The modulus of two numbers,
 *         Or -1 if the divisor is 0.
 */

int mod(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a % b);
}
