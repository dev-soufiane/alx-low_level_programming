#include <stdio.h>

/**
 * main - The entry point
 *
 * Description: This program prints base-10 single digits from 0
 * Return: 0 if the program runs successfully
 */

int main(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	return (0);
}
