#include "holberton.h"
/**
 * leet - 1337 convert
 * @str: input string
 * Return: String conversion
 */
char *leet(char *str)
{
	int c = 0, c_a;
	char *alpha = "aeotlAEOTL";
	char *num = "4307143071";

	while (str[c] != '\0')
	{
		c_a = 0;
		while (alpha[c_a] != '\0')
		{
			if (str[c] == alpha[c_a])
				str[c] = num[c_a];
			c_a++;
		}
		c++;
	}
	return (str);
}
