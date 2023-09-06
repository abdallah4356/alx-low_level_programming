#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - creates a 2d array of ints
 *
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: a pointer to a 2 dimensional array of ints
*/

int **alloc_grid(int width, int height)
{
	int **tr, x, f;

	tr = malloc(sizeof(*tr) * height);

	if (width <= 0 || height <= 0 || tr == 0)
		return (NULL);

	else
	{
		for (x = 0; x < height; x++)
		{
			tr[x] = malloc(sizeof(**tr) * width);
			if (tr[x] == 0)
			{
				while (x--)
					free(tr[x]);
				free(tr);
				return (NULL);
			}
			for (f = 0; f < width; f++)
				tr[x][f] = 0;
		}
	}
	return (tr);
}
