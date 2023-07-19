#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int x, i;

	for (x = 0; x < 9; x++)
	{
		for (i = 0; i < 26; i++)
			_putchar(alphabet[i]);
		_putchar('\n');
	}
}
