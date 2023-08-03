#include "main.h"

/**
 * _pow_recursion - prints the value powered
 *
 * @x: the number which raised to the power of y
 * @y: the y itself
 *
 * Return: 0 Always success
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
	{
		return (x);
	}
	else if (y == 0)
	{
		return (1);
	}
		return (x * _pow_recursion(x, y - 1));

}
