#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: ARGC
 * @av: ARGV
 * Return: pointer
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, l;
	int length;
	char *cont;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
			;
		length += j + 1;
	}
	cont = malloc(sizeof(char) * (length + 1));

	if (cont == NULL)
		return (NULL);
	length = 0;
	for (k = 0; k < ac; k++)
	{
		for (l = 0; av[k][l] != '\0'; l++)
		{
			*(cont + length) = av[k][l];
			length++;
		}
		*(cont + length) = '\n';
		length++;
	}
	return (cont);
}
