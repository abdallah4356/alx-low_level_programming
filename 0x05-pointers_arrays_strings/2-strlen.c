#include "main.h"

/**
 * _strlen - a function to count the len
 *
 * @s: the string ptr
 *
 * Return: the length
*/

int _strlen(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
		x++;
	}

	return (x);
}
