#include "holberton.h"

/**
 * long_s - find the length of a string
 * @s: number
 *
 * Return: Always 0.
 */

int long_s(char *s)
{
	if (*s != '\0')
	{
		return (1 + long_s(s + 1));
	}
	return (0);

}
/**
 * compare - compare the positions.
 * @s: number
 * @l: lenght
 *
 * Return: Always 0.
 */
int compare(char *s, int l)
{
	if (l <= 0)
	{
		return (1);
	}
	if (*s == *(s + (l - 1)))
	{
		return (compare(s + 1, l - 2));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - check if string is a palindrome.
 * @s: character
 *
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
	int l;

	l = long_s(s);
	return (compare(s, l));
}
