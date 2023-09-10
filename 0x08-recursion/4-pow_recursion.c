#include "main.h"

/**
 * _pow_recursion - returns x raised to the power of y
 *
 * @x: the value to be raised
 * @y: the exponent
 *
 * Return: the value of x raised to the power of y
*/

int _pow_recursion(int x, int y)
{
	int k = 0;

	if (y < 0)
		return (-1);

	else if (y > 1)
	{
		k += (_pow_recursion(x * x, y - 1));
	}
	return (k);
}
