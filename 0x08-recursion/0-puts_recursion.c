#include "holberton.h"
/**
 * _puts_recursion - prints a string
 * @s: inout string
 * void: no Return
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
