#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the name of the file it was compiled from,
 * followed by a new line.
 *
 * Return: Always (0)
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
