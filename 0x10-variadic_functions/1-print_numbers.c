#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers
 *
 * @separator: the separtor between nums
 * @n: the number of args passed to the function
 *
 * Return: the numbers all
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vl;

	unsigned int j;

	va_start(vl, n);
	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(vl, int));
		if (separator)
			printf("%s", separator);
	}
	printf("\n");

}
