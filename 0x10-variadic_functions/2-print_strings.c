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

	va_start(vl, n);

	if (va_arg(vl, char *) == NULL)
		printf("nil");

	else
	{
		for (j = 0; j < n; j++)
		{
			printf("%s", (va_arg(vl, char *)));

			if (separator != NULL && j < n - 1)
				printf("%s", separator);
		}
	}
	va_end(vl);

}
