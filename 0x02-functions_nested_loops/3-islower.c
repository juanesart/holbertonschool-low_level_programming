#include "holberton.h"
/**
 * _islower - check for lowercase character
 * @c: character to check for lowercase
 * Return: 1 if c is lowercase, 0 if not
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
