#include "main.h"

/**
 * _puts - prints a string of characters
 *
 * @str: string of c
 *
 * Return: (0) Always success
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str + 0);
	str++;
	}
	_putchar('\n');
}
