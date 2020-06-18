#include "holberton.h"
/**
 * _isupper - check for lowercase character
 * @c: character to check for lowercase
 * Return: 1 if c is uppercase, 0 if not
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
