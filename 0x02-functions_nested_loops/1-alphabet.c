#include "holberton.h"
/**
* main - entry block
* @void: no argument
* Return: 0 (success)
**/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
