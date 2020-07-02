#include "holberton.h"
/**
 * is_prime_number - check if input integer is a prime number
 * @n: integer
 * Return: return 1 if input integer is prime number, , otherwise return 0
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

/**
 * is_prime - helper function to support is_prime_number function
 * @j: integer
 * @k: integer
 * Return: 1 if integer is prime, 0 if not
 */
int is_prime(int j, int k)
{
	if (j == 1 || j < 0)
		return (0);
	if (j == k)
		return (1);
	if (j % k == 0)
		return (0);
	else
		return (is_prime(j, k + 1));
}
