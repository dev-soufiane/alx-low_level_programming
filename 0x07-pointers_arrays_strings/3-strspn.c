#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string.
 * @accept: Pointer to the string.
 *
 * Return: (currentIndex) bytes count of initial segment in s.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int currentIndex, acceptIndex;

	for (currentIndex = 0; s[currentIndex] != '\0'; currentIndex++)
	{
		for (acceptIndex = 0; accept[acceptIndex] != s[currentIndex]; acceptIndex++)
		{
			if (accept[acceptIndex] == '\0')
			{
				return (currentIndex);
			}
		}
	}
	return (currentIndex);
}


