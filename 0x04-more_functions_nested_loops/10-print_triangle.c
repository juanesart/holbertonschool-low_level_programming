#include "holberton.h"
/**
 * print_triangle - print a triangle
 * @size: input parameter
 *
 */
void print_triangle(int size)
{
	int e, d, l;

	if (size > 0)
	{
		for (l = 1; l <= size; l++)
		{
			for (e = (size - l); e > 0; e--)
			{
				_putchar(' ');
			}
			for (d = 1; d <= l; d++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
