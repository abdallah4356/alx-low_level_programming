#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line
 *
 * @separator: the separator between strings
 * @n: the number of passed strings
 *
 * Return: the strings
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	const char *s;
	va_list vl;

	va_start(vl, n);

	for (j = 0; j < n; j++)
	{
		s = va_arg(vl, const char *);

		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
		printf("%s", s);
		}
		if (separator != NULL && j < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(vl);

	printf("\n");
}
