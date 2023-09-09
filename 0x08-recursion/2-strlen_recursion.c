#include "main.h"

/**
 * _strlen_recursion - counts the length of the string
 *
 * @s: the ptr of the first char
 *
 * Return: the len of the stir
*/

int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s == '\0')
	return (0);

	else
	{
	_strlen_recursion(s + 1);
	x++;
	}
	return (x);
}
