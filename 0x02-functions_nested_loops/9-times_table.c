#include "holberton.h"
/**
 * times_table - print the 9 times table
 * @void: no parameter
 * Return: always 0
 */
void times_table(void)
{
	int a;
	int b;
	int r, d1, d2;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			r = a * b;
			d1 = r / 10;
			d2 = r % 10;
			if (b == 0)
			{
				_putchar('0');
			}
			else
			{
				if (d1 == 0)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(d1 + '0');
				}
				_putchar(d2 + '0');
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
