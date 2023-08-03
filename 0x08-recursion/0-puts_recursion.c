#include "main.h"

/**
 * _puts_recursion - a function
 *
 * @s: the pointer to the character
 *
 * Return: the whole string
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_puts_recursion(s - 1);
		_putchar(*s);
		_putchar('\n');
	}
}
