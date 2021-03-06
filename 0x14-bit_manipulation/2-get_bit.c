#include "holberton.h"
#include <stdlib.h>
/**
  * get_bit - returns the value of of a bit at a given index
  * @n: takes in a number
  * @index: index of the given bit
  * Return: value of bit at index or -1 if error
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (index == 0)
	{
		return (n & 1);
	}
	return (get_bit(n >> 1, index - 1));
}
