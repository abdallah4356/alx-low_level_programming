#include "main.h"

/**
 * _isalpha - checks if the character is alphabet
 *
 * @c: the character itself
 *
 * Return: 1 if it's an alpha and 0 if else
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
