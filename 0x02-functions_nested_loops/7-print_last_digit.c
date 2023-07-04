#include "main.h"

/**
 * print_last_digit - prints the last d
 *
 * @j: the digit
 *
 * Return: the last digit of the number
*/

int print_last_digit(int j)
{
	int jlast;
	
	if (j < 0)
	{
		jlast = -1 * (j % 10);
	}
	else
	{
		jlast = j % 10;
	}

	return (jlast);
}
