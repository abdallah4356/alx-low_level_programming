#include "main.h"

/**
 * reset_to_98 - updates the value of the pointers value n to 98
 *
 * @n: the integer variable
 *
 * Return: (0) Always success
*/

void reset_to_98(int *n)
{
	int u = 98;

	n = &u;

	return (0);
}
