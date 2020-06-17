#include "holberton.h"
/**
 * print_times_table - print the n times table
 * @n: input parameter
 * Return: always 0
 */
void print_times_table(int n)
{
	int a, b, r, d1, d2, d3;

	if (n > 15 || n <= 0)
	{
		return;
	}
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			r = a * b;
			d1 = (r / 10) / 10;
			d2 = r / 10 % 10;
			d3 = r % 10;
			if (b == 0)
				_putchar('0');
			else
			{
				if (d1 == 0)
				{
					_putchar(' ');
					if (d2 == 0)
						_putchar(' ');
					else
						_putchar(d2 + '0');
				}
				else
				{
					_putchar(d1 + '0');
					_putchar(d2 + '0');
				}
				_putchar(d3 + '0');
			}
			if (b < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
