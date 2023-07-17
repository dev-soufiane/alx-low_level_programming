#include <stdio.h>

/**
 * main - The entry point
 *
 * Description: This program prints all possible
 * different combinations of two digits.
 * Return: 0 if program runs successfully
 */

int main(void)
{
	int i, j;

	i = 0;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			if (i != j && i < j)
			{
				putchar(i + 48);
				putchar(j + 48);
				if (i + j != 17)
				{
					putchar(',');
					putchar(32);
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
