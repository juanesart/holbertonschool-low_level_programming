#include "holberton.h"
/**
 * print_diagonal - print diagonal line
 * @n: input parameter
 *
 */
void print_diagonal(int n)
{
	int i, a, b;

	i = n - 1;

	if (n > 0)
	{
		if (i > 0)
		{
			for (b = 1; b <= n; b++)
			{
				i = b - 1;
				for (a = 0; a < i; a++)
				{
					_putchar(' ');	
				}
				_putchar(92);
				_putchar('\n');
			}
		}
	}
	else
		_putchar('\n');
}
