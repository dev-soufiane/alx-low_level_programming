#include <stdio.h>

/**
 * main - The entry point
 *
 * Description: This program prints base-10 single digits from 0
 * using the putchar function without a char variable type.
 * Return: 0 if the program runs successfully
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
