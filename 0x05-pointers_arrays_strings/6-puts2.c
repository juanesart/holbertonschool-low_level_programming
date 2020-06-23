#include "holberton.h"
/**
  * puts2 - prints one character out of two
  * @str: input argument
  */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
