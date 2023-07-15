#include <stdio.h>

/**
 * main - The entry point
 *
 * Description: This program prints all lowercase
 * hexadecimal numbers using putchar.
 * Return: 0 if the program runs successfully
 */

int main(void)
{
	int i, x;

	for (i = 48; i < 58; i++)
		putchar(i);
	for (x = 97; x < 103; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
