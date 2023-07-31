#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to the string.
 * @b: Character.
 * @n: Number of bytes in memory.
 *
 * Return: Pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
