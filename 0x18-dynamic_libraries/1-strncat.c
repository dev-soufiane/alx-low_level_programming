#include "main.h"

/**
* _strncat - Concatenates two strings.
* @dest: Pointer to the destination string.
* @src: Pointer to the source string.
* @n: Maximum number of bytes to be concatenated from src.
*
* Return: Pointer to the resulting string dest.
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_size = 0;

	while (*(dest + dest_size) != '\0')
		dest_size++;
	while (*(src + i) != '\0' && i < n)
	{
		dest[dest_size + i] = *(src + i);
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest);
}
