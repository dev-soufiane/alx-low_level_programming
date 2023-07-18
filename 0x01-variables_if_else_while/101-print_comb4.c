#include <stdio.h>

/**
 * main - The entry point
 *
 * Description: prints all possible different
 * combinations of three digits.
 * Return: 0 if program runs successfully
 */

int main(void)
{
	int i, j, x;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			x = 0;
			while (x <= 9)
			{
				if (i != j && i < j && j != x && j < x)
				{
					putchar(i + 48);
					putchar(j + 48);
					putchar(x + 48);
					if (i + j + x != 24)
					{
						putchar(',');
						putchar(32);
					}
				}
				x++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
