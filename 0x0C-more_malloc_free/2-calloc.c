#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memset - sets mem
 *
 * @s: the ptr to the string
 * @b: a char
 * @n: a positive number
 * Return: pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
		*s++ = b;

	return (p);
}

/**
 * _calloc - allocates memory for an array using malloc
 *
 * @nmemb: n of memory bytes
 * @size: the size
 *
 * Return: ptr to the allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;

	if (size == 0 || nmemb == 0)
		return (NULL);
	s = malloc(sizeof(int) * nmemb);

	if (s == 0)
		return (NULL);

	_memset(s, 0, sizeof(int) * nmemb);

	return (s);
}
