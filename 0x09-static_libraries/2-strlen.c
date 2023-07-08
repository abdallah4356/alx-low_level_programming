#include "main.h"

/**
 * _strlen - counts the number of characters
 *
 * @s: is a pointer that point to the integer's value
 *
 * Return: count
*/

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
