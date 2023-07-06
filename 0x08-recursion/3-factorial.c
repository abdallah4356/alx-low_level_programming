#include "main.h"

/**
 * factorial - prints the fact of a number
 *
 * @n: the number
 *
 * Return: n*factorial(n-1)
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
