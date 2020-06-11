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
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
