#include <stdio.h>
#include "holberton.h"
#include <math.h>
/**
  * set_bit - sets the value of a bit to 1 at given index
  * @n: takes in a pointer to a number
  * @index: the index of the bit you want
  * Return: 1 or -1 if error
  */
int set_bit(unsigned long int *n, unsigned int index)

{
	int add;

	if (index > 63)
		return (-1);
	add = 1 << index;
	*n = *n | add;
	return (1);
}
