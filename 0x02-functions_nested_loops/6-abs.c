#include "holberton.h"
/**
 * _abs - print the absolute value of a interger
 * @n: input parameter
 * Return: the absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = (n * -1);
		return (n);
	}
	else
	{
		return (n);
	}
}
