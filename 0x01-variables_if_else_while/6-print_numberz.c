#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - entry block
* @void: no argument
* Return: 0 (success)
**/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n % 10 + '0');
	}
	putchar('\n');
	return (0);
}
