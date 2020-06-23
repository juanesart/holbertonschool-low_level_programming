#include "holberton.h"
/**
  * rev_string - reverse a string
  * @s: input argument
  */
void rev_string(char *s)
{
	int i, c = 0;
	char aux;

	while (s[c] != '\0')
		c++;
	c--;

	for (i = 0; i < c; c--, i++)
	{
		aux = s[i];
		s[i] = s[c];
		s[c] = aux;
	}
}
