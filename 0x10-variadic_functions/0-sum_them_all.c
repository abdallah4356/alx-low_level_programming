#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - adds all given ints
 *
 * @n: the number of arguments
 *
 * Return: 0 if n = 0 otherwise return the sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list vl;
	unsigned int v;
	int sum = 0;

	if (n == 0)
	return (0);


	va_start(vl, n);

	for (v = 0; v < n; v++)
	{
		sum += va_arg(vl, int);
	}
	va_end(vl);
	return (sum);

}
