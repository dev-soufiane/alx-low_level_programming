#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int i, j, x;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			x = i;
			if (i > 9)
			{
				_putchar(1 + 48);
				x = i % 10;
			}
			_putchar(x + 48);
		}
		_putchar('\n');
	}
}
