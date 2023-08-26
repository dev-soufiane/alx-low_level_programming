#include "lists.h"

/**
 * pre_main - runs before main and print text
 *
 * Return: nothing
 */

void __attribute__((constructor)) pre_main()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
