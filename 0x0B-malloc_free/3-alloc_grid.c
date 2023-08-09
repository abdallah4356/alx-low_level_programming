#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - returns a ptr to a 2d array
 *
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: a pointer to the array
*/

int **alloc_grid(int width, int height)
{
	int **a;
	int n;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(width * sizeof(int *));

	for (n = 0; n < width; n++)
	{
		a[n] = malloc(height * sizeof(int));
	}

	if (a == NULL)
		return (NULL);

	return (a);
}
