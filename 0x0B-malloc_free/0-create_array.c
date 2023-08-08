#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array
 *
 * @size: the size to be reserved
 * @c: the character's size indicator
 *
 * Return: 0 Always success
*/

char *create_array(unsigned int size, char c)
{
	char *y;

	y = malloc(size);
	if (size == 0 || y == 0)
		return (0);
	else if (y == NULL)
		return (NULL);
	while (size--)
		y[size] = c;

	return (y);
}
