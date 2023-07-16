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
	int lines, nums;

	for (lines = 1; lines <= 10; lines++)
	{
		for (nums = 0; nums <= 14; nums++)
		{
			_putchar(nums);
		}
	}	_putchar('\n');
}
