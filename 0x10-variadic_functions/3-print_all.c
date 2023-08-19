#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - A function that prints anything
 * @format: A list of types of arguments passed to the function
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	const char *ptr = format;
	char *str;
	int num;
	float flt;

	va_start(args, format);

	while (ptr && *ptr)
	{
		switch (*ptr)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				num = va_arg(args, int);
				printf("%d", num);
				break;
			case 'f':
				flt = va_arg(args, double);
				printf("%f", flt);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				break;
		}
		ptr++;

		if (*ptr)
			printf(", ");
	}

	va_end(args);
	printf("\n");
}
