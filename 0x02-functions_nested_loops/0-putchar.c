#include "main.h"

/**
 * main - The entry point
 *
 * Description: This program prints "_putchar" with _putchar function
 * Return: 0 if program runs successfully
 */

int main(void)
{
	char word[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(word[i]);
	_putchar('\n');
	return (0);
}
