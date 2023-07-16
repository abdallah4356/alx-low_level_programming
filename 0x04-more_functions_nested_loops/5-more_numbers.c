#include "main.h"

/**
 * more_numbers - print 0 - 14 ten times
 *
 * Description: prints nmbers
 *
 * Return: Always 0 success
*/

void more_numbers(void)
{
	int lines = 1, nums;

	while (lines <= 10)
	{
		for (nums = 0; nums <= 14; nums++)
		{
			_putchar(nums + '0');
			_putchar('\n');
		}
	}lines++;
}
