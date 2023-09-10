#include "main.h"

/**
 * factorial - finds the factorial of any given number
 *
 * @n: the number
 *
 * Return: -1 if n is non positive and factorial if else
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	else
	{
		return (n * factorial(n - 1));
	}
}
