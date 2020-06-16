#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - print all numbers from n to 98
 * @n: input parameter
 * Return: numbers from n to 98
 */
void print_to_98(int n)
{
	if (n != 98)
	{
		while (n < 98)
		{
			printf("%d", n);
			printf(", ");
			n++;
		}
		while (n > 98)
		{
			printf("%d", n);
			printf(", ");
			n = n - 1;
		}
	}
	printf("%d\n", n);
}
