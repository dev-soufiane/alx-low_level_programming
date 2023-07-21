#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: Number of times the character should be printed
 */

void print_diagonal(int n)
{
	int i, j, x;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			x = 0;

			while (x < i)
			{
				_putchar(' ');
				x++;
				if (i == 2)
				{
					break;
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
		else
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
