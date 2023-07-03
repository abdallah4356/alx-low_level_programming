#include "main.h"

/**
 * _islower - checks the character
 *
 * @c: checks if the character is lower case
 *
 * Return: 1 if it's lowercase and 0 if else
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
