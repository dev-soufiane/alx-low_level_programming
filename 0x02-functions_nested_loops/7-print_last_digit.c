#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number to check
 *
 * the last digit of a given number.
 * Return: last digit value
 */

int print_last_digit(int n)
{
	int ld;

	if (n > 0)
		ld = n % 10;
	else
		ld = -1 * (n % 10);
	_putchar(ld + '0');
	return (ld);
}
