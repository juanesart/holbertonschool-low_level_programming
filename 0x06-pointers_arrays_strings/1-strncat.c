#include "holberton.h"
/**
 * _strncat - concat strings *
 * @dest: destination string
 * @src: source string
 * @n: integer
 * Return: returns string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j != n)
		dest[i++] = src[j++];
	return (dest);
}
