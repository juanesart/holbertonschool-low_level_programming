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
	int m;
	int l;



	for (n = 0; n < 8; n++)
	{
		for (m = n + 1; m < 9; m++)
		{
			for (l = m + 1; l < 10; l++)
			{
				putchar(n % 10 + '0');
				putchar(m % 10 + '0');
				putchar(l % 10 + '0');
				if (n != 7 || m != 8 || l != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
