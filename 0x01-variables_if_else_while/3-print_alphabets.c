#include <stdio.h>

/**
 * main - The entry point
 *
 * Description: This program prints the alphabet in lowercase
 * and uppercase using the putchar function() and a for loop.
 * Return: 0 if the program runs successfully
 */

int main(void)
{
	char lower_alpha[] = "abcdefghijklmnopqrstuvwxyz";
	char upper_alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
		putchar(lower_alpha[i]);
	for (i = 0; i < 26; i++)
		putchar(upper_alpha[i]);
	putchar('\n');
	return (0);
}
