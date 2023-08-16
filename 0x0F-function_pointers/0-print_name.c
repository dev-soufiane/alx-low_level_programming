#include "function_pointers.h"

/**
 * print_name - print_name - Prints a name using a function pointer
 * @name: The name to be printed
 * @f: The function pointer to the printing function
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
