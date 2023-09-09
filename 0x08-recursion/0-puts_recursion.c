#include "main.h"

/**
 * _puts_recursion - prints a string
 *
 * @s: the string pointer
 *
 * Return: the ptr of the 1st char
*/

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
		_putchar('\n');
}
