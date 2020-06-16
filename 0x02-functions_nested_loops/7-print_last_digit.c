#include "holberton.h"
/**
 * print_last_digit - print the last digit of a interger
 * @n: input parameter
 * Return: the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -1 * (n % 10);
	}
	else
	{
		n = n % 10;
	}
	_putchar(n + '0');
	return (n);
}
