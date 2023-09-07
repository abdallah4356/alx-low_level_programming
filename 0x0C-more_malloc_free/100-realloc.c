#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - allocates block of memory
 *
 * @ptr: pointer to the allocated memory
 * @old_size: size of allocated space for the pointer
 * @new_size: size of the newely allocated peice of memory
 *
 * Return: ptr
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pointer;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		pointer = malloc(new_size);
		if (pointer == NULL)
			return (NULL);
		return (pointer);
	}
	if (new_size > old_size)
	{
		pointer = malloc(new_size);
		if (pointer == NULL)
			return (NULL);
		for (x = 0; x < old_size && x < new_size; x++)
			*((char *)pointer + x) = *((char *)ptr + x);
		free(ptr);
	}
	return (pointer);
}
