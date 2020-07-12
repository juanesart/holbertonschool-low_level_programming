#include "holberton.h"
#include <stdlib.h>
/**
  * _memcpy - copies memory of src to dest
  * @dest: destination
  * @src: source
  * @n: buffer size
  * Return: dest with src copied over
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
/**
  * _realloc - reallocates a memory block using malloc and free
  * @ptr: ptr to the memory prev allocated
  * @old_size: size of bytes of allocated space for ptr
  * @new_size: new size in bytes of new memory block
  * Return: the new pointer with original ptr's memory copied over
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	unsigned int num_copied;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size < old_size)
	{
		num_copied = new_size;
	}
	else
	{
		num_copied = old_size;
	}
	p = _memcpy(p, ptr, num_copied);
	free(ptr);
	return (p);
}
