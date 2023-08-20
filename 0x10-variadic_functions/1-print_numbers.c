#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - just printing nums
 *
 * @separator: the separator between nums
 * @n: the given number of ints
 *
 * Return: the nums
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int r;
	va_list vl;

	va_start(vl, n);

	for (r = 0; r < n; r++)
	{
		printf("%d", va_arg(vl, int));
	}
	if (r < n - 1 && separator != NULL)
		printf("%s", separator);

	printf("\n");

	va_end(vl);
}
