#include "main.h"

/**
 * _sqrt_recursion - finds the natural squareroot
 *
 * @n: the number to find its square root
 *
 * Return: the sqrt if availbale and -1 if n has no sqrt
*/

int _sqrt_recursion(int n)
{
	return (gt(n, 1));
}

/**
 * gt - gets the square root
 *
 * @n: the number to get sqrt of
 * @p: the base number
 *
 * Return: the square root of the number
*/

int gt(int n, int p)
{
	if (p * p == n)
		return (p);
	else if (p * p < n)
		return (gt(n, p + 1));

	else
	return (-1);
}
