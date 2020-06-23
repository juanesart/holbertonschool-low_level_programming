#include "holberton.h"

/**
 * _atoi - convert string to int
 * @s: Value of input of string
 * Return: return the int
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int aux = 0;
	int aux1 = 1;

	while (s[c] != '\0')
	{
		if (s[c] == '-')
			aux1 = aux1 * -1;
		if (s[c] >= '0' && s[c] <= '9')
			aux = aux * 10 + (s[c] - '0');
		if (s[c] == ';')
			break;
		c++;
	}
	return (aux = aux * aux1);
}
