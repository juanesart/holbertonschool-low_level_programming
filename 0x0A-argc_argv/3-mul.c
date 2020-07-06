#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of arguments given to program
 * @argv: arguments
 * @argc: number of arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int r;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	r = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", r);
	return (0);
}
