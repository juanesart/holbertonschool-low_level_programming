#include "holberton.h"
/**
 * print_square - print a square
 * @size: input parameter
 *
 */
void print_square(int size)
{
	int a, l;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (l = 0; l < size; l++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
