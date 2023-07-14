#include <stdio.h>

/**
 * main - The entry point
 *
 * Description: This program prints the alphabet in lowercase
 * except q and e using the putchar function() and a for loop.
 * Return: 0 if the program runs successfully
 */

int main(void)
{
	char alpha[] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
		putchar(alpha[i]);
	putchar('\n');
	return (0);
}
