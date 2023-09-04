#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of characters with malloc
 *
 * @size: the size of the array
 * @c: the first character
 *
 * Return: 0 if size is 0 otherwise a pointer to the first char
*/

char *create_array(unsigned int size, char c)
{
	char *p = malloc(size);

	if (size == 0 || p == 0)
		return (0);
	while (size--)
		p[size] = c;
	return (p);
}
