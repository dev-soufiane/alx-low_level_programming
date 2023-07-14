#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The entry point
 *
 * Description: This program generates a random number
 * and determines the last digit.
 * Return: 0 if program runs succesfully
 */

int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	/* Determines the properties of the last digit of a number */
	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ld);
	}
	else if (ld < 0 && ld != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	}
	return (0);
}
