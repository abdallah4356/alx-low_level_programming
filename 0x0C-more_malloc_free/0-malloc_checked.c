#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: the required size
 *
 * Return: a ptr to the allocated space or 98 on failure
*/

void *malloc_checked(unsigned int b)
{
	int *ppp;

	ppp = malloc(b);

	if (ppp == 0)
		exit(98);

	return (ppp);
}
