#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all given p
 *
 * @n: the number of arguments
 *
 * Return: 0 if n is 0 and the sum otherwise
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int j, s = 0;

	va_list vl;

	va_start(vl, n);

	if (n == 0)
		return (0);

	for (j = 0; j < n; j++)
	{
		s += (va_arg(vl, int));
	}
	return (s);

	va_end(vl);
}
