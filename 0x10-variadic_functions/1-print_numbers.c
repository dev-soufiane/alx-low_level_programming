#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers, separated by a given string
 * @separator: String to be printed between numbers
 * @n: Number of integers passed to the function
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);

	if (separator == NULL || n == NULL)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));

		if (i != n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(nums);
}
