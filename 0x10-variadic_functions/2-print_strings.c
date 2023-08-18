#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings followed by a new line
 * @separator: String to be printed between the strings (can be NULL)
 * @n: Number of strings passed to the function
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list s;

	i = n;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(s, n);

	while (i--)
	{
		char *str = va_arg(s, char*);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(s);
	printf("\n");
}
