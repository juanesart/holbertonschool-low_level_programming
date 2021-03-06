#include <stdio.h>
#include <stdlib.h>

/**
 *main -print the minimum number of coins to make change for an amount of money
 *@argc: argument counter
 *@argv: argument vector
 *Return: amount of cents you need to give back,
 *error if number of arguments
 */

int main(int argc, char *argv[])
{
	int count;
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	for (count = 0; num > 0; count++)
	{
		if (num >= 25)
			num = num - 25;
		else if (num >= 10)
			num = num - 10;
		else if (num >= 5)
			num = num - 5;
		else if (num >= 2)
			num = num - 2;
		else
			num = num - 1;
	}
	printf("%d\n", count);
	return (0);
}
