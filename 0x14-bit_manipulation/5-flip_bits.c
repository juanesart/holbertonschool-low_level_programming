#include "holberton.h"
#include <stdio.h>
/**
  * flip_bits - # of bits you would need to flip to get fr one # to another
  * @n: takes in an integer
  * @m: takes in the 2nd integer to compare
  * Return: number of bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = 0, comp, comp1;

	while (!(n == 0 && m == 0))
	{
		comp = n & 1;
		comp1 = m & 1;
		n = n >> 1;
		m = m >> 1;
		if (comp != comp1)
			flip += 1;
	}
	return (flip);
}
