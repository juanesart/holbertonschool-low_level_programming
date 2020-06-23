#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints all the array side by side
 * @a: Value of input array
 * @n: Value of integer
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		printf("%d", a[c]);
		if (c != n && c < n - 1)
			printf(", ");
	}
	printf("\n");
}
