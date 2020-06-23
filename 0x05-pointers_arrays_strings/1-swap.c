#include "holberton.h"
/**
 * swap_int - swap values
 * @a: takes in an integer
 * @b: takes in an integer
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
