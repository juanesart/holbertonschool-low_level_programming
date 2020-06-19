#include <stdio.h>

/**
 * main - Fibonacci sequence
 *
 * Return: O Always
 *
 */
int main(void)
{
	int a = 1, b = 2, r = 0, p = 2;

	while (r < 4000000)
	{
		r = a + b;
		a = b;
		b = r;
		if (r % 2 == 0)
			p = r + p;
	}
	printf("%d\n", p);
	return (0);
}
