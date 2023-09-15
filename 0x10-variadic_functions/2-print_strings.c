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
	va_list vl;
	unsigned int j;
	char *s;

	va_start(vl, n);

	s = va_arg(vl, char *);

	if (s == NULL)
	{
		printf("nil");
	}

	for (j = 0; j < n; j++)
	{
		printf("%s", s);

		if (separator != NULL && j < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(vl);

}
