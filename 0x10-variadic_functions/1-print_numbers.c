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
	unsigned int r = n;
	va_list vl;

	va_start(vl, n);


	if (separator == NULL)
	{
		while(r--)
			printf("%d", va_arg(vl, int));
	}
	else
			while(r--)
			printf("%d%s", va_arg(vl, int), separator);
	va_end(vl);
	printf("\n");
}