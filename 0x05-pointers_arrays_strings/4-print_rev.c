#include "holberton.h"

/**
 * print_rev - prints the string in reverse
 *
 * @s: input argument
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	c--;
	while (c >= 0)
	{
		_putchar(s[c]);
		c--;
	}
	_putchar('\n');
}
