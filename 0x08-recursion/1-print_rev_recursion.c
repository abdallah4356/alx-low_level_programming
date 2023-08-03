#include "main.h"

/**
 * _print_rev_recursion - prints the string in reverse
 *
 * @s: the pointer to the first character
 *
 * Return: the string itself
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
