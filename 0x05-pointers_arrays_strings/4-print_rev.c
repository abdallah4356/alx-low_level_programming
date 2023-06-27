#include "main.h"

/**
 * print_rev - printing string in reverse
 *
 * @s: is a char
 *
 * Return: *s in reverse
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
	{
	_putchar(s[i]);
	}
	_putchar('\n');
}
