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
	int i;

	i = n;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(nums, n);

	while (i--)
	{
		printf("%d%s", va_arg(nums, int), 
				i ? (separator ? separator : "") : "\n");
	}

	printf("\n");
	va_end(nums);
}
