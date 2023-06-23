#include "main.h"

/**
 * _isdigit - checks if the input from (0:9)
 *
 * @c: input digit
 *
 * Return: 1 if it's digit and 0 if else
*/

int _isdigit(int c);
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
