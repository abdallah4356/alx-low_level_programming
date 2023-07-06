#include "main.h"

/**
 * more_numbers - print 0 - 14 ten times and you
 *		can only use _putchar three times
 *
 * Return: Always 0 success
*/

void more_numbers(void)
{
	int x, r;

	for (x = 1; x <= 10; x++)
	{
		for (r = 0; r <= 14; r++)
		{
			_putchar(r);
		}
	}	_putchar('\n');
}
