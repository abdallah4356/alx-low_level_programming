#include "function_pointers.h"

/**
 * int_index - search for an int
 *
 * @array: the array
 * @size: the size of the array
 * @cmp: the function that compares inputs
 *
 * Return: the integer
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int r = 0;

	if (array != NULL && size != '\0' && cmp != NULL)
		while (r < size)
		{
			if (cmp(array[r]))
				return (r);
			r++;
		}
	return (-1);
}
