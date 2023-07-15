#include <stdio.h>

/**
 * main - The entry point
 *
 * Description: This program prints the alphabet in lowercase
 * in reverse using the putchar function() and a for loop.
 * Return: 0 if the program runs successfully
 */

int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 25; i >= 0; i--)
		putchar(alpha[i]);
	putchar('\n');
	return (0);
}
