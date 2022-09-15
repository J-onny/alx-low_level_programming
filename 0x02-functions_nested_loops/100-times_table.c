#include "main.h"

/**
 * prints the n times table, starting with 0.
 * @n: - What n does
 */

void print_times_table(int n)
{
	int x, y, z;


	for (x = 0; x < n; z++)
	{
		for (y = 0; y < n; y++)
		{
			if (!(n > 15 || n < 0))
		{
			z = x * y;
			if (y == 0)
			{
				_putchar(z + '0');
			}

			if (y < 10 && y != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(z + '0');
			}
			else if (z >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
		}
		}
		}
		_putchar('\n');
	}
}

