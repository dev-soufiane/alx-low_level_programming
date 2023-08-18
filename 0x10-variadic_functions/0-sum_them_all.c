#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function that returns the sum of all its parameters
 * @n: unsigned integer
 *
 * Return: The sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;

	unsigned int i;
	int x, sum;

	va_start(nums, n);

	sum = 0;

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		x = va_arg(nums, int);
		sum += x;
	}

	va_end(nums);

	return (sum);
}
