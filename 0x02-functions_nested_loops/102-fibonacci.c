#include <stdio.h>

/**
 * main - print the firts 50 fibonacci numbers
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int i;
	long a = 1, b = 2, r = 0;

	printf("1, 2");
	for (i = 1; i <= 48; i++)
	{
		r = a + b;
		a = b;
		b = r;
		printf(", %ld", r);
	}
	putchar('\n');
	return (0);
}
