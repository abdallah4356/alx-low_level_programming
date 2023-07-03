#include "main.h"

/**
 * print_sign - prints the sign of an integer
 *
 * @n: the integer that we will be checking
 *
 * Return: 1 if it's positive and 0 if it's zero and -1 if it's negative
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
