#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The entry point
 *
 * Description: This program checks if number
 * is positive, negative or zero
 * Return: 0 if program runs successfully
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Check the value of n and print the appropriate message */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
