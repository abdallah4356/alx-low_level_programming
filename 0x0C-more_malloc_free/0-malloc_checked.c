#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - checks if the memory has been alloc
 *
 * @b: the unsigned int
 *
 * Return: a pointer to the address
*/

void *malloc_checked(unsigned int b)
{
	int *p;

	p = (int*)malloc(sizeof(b) * sizeof(int));
	if (p == NULL)
	{
		exit(98);
	}
	return (0);
}
