#include "holberton.h"
/**
 * reverse_array - reverses an array of integers
 * @a: array to reverse
 * @n: number of array entries to reverse
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, c, f;

	i = 0;
	n = n - 1;
	while (i < n)
	{
		c = a[i];
		f = a[n];
		a[i++] = f;
		a[n--] = c;
	}
}
