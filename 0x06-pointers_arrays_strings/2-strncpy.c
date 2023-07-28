#include "main.h"

/**
 * _strncpy - Function that copies a string.
 * @dest: Pointer to the string.
 * @src: Pointer to the string.
 * @n: number of bytes to be copied.
 *
 * Return: Pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*(dest + i) != '\0')
	{
		if (i < n)
		{
			*(dest + i) = *(src + i);
		}
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
