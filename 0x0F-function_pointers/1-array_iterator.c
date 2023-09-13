#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 *
 * @array: the array of the function
 * @size: the size of the array
 * @action: the pointer to the needed function
 *
 * Return: the function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *r = array + size - 1;

	if (array != NULL && size != '\0' && action != NULL)
	{
		while (array <= r)
			action(*array++);
	}
}
