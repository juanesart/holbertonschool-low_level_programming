#include "holberton.h"
/**
 * _isalpha - check for lowercase character
 * @c: character to check for letter
 * Return: 1 if c is a leter, 0 if not
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
