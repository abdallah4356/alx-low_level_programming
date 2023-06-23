#include "main.h"

/**
 * _isupper - check the code.
 *
 * @c: checking whether it's uppercase or not
 *
 * Return: 1 if it's uppercase, 0 if it's not
*/

int _isupper(int c);
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
