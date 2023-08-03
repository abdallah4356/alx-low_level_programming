#include "main.h"

/**
 * factorial - prints the fact of a given number
 *
 * @n: the number
 *
 * Return: 0 Always success
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
