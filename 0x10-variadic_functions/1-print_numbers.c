#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints given numbers
 *
 * @separator: the sep between the integers
 * @n: the number of arguments passed to the programm
 *
 * Return: the numbers or 0 if null is passed
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	va_start(vl, n);
	unsigned int r;

	if (separator == NULL)
	{
		for (r = 0; r < n; r++)
			printf("%d", vl);
	}
	else

	for (r = 0; r < n; r++)
	{
		printf("%d%c", vl, separator);
	}
	va_end(vl);
}
