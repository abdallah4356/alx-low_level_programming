include "main.h"

/**
 * main: void reset_to_98
 *
 * Description: updating the variables value through the pointer n
 *
 * Return: (0) Always success
*/

void reset_to_98(int *n)
{
	int *n = &n;

	n = 98;

	return (0);
}
