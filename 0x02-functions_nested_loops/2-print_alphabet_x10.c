#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet
 *
 * Description: prints the alphabet 10 times
 *
 * Return: 0 Always success
*/

void print_alphabet_x10(void)
{
	int n;
	int y = 1;

		while (y <= 10)
	{
			for (n = 'a'; n <= 'z'; n++)
			{
				_putchar(n);
				_putchar('\n');
			}
		y++;
	}
}
