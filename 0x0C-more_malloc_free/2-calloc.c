#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memset - sets memory
 *
 * @s: the pointer to the memory region
 * @b: the value to set
 * @n: the number of bytes to set
 * Return: pointer to the memory region
 */

void *_memset(void *s, int b, size_t n)
{
	unsigned char *p = s;

	while (n--)
		*p++ = (unsigned char)b;

	return (s);
}

/**
 * _calloc - allocates memory for an array using malloc
 *
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;

	if (size == 0 || nmemb == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	_memset(s, 0, nmemb * size);
	return (s);
}
