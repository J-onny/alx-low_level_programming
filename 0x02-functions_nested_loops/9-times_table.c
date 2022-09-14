#include "main.h"

/**
 * times_table - Check description
 * Description: It prints 9 times table starting with 0
 * Return: Nothing.
 */
void times_table(void)
{ int i, j, pdt;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9 ; j++)
		{
			pdt = j * i;

			if (j == 0)
			{
				_putchar(pdt + '0');
			}
			if (pdt <= 0 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(pdt + '0');
			}

			else if (pdt >= 0)
			{
			_putchar(',');
			 _putchar(' ');
			 _putchar(' ');
			_putchar((pdt / 10) + '0');
			_putchar((pdt % 10) + '0');

			}
			_putchar('\n');
		}


	}
}

