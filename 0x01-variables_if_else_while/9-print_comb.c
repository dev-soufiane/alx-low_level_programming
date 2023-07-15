#include <stdio.h>

/**
 * main - The entry point
 *
 * Description: This program prints all possible combinations
 * of single-digit numbers, separated by a comma and a space,
 * using the putchar function without a char variable type.
 * Return: 0 if the program runs successfully
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
		putchar(44);
		putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
