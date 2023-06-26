#include "main.h"

/**
 * swap_int - swaps the value of a to b
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: values of a and b
 *
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
