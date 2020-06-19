#include "holberton.h"
/**
  * print_number - print numbers out
  * @n: input integer
  */
void print_number(int n)
{
	unsigned int x;
	int m, d;

	d = 10;

	if (n < 10 && n >= 0)
	{
		_putchar (n + '0');
	}
	else if (n > -10 && n < 0)
	{
		n = n - 2 * n;
		_putchar('-');
		_putchar (n + '0');
	}
	else
	{
		if (n < 0)
		{
			n = n * -1;
			_putchar ('-');
		}
		x = n;
		while (x / d > 9)
		{
			d = d * 10;
		}
		while (d > 0)
		{
			m = x / d;
			x = x % d;
			_putchar (m + '0');
			d = d / 10;
		}
	}
}
