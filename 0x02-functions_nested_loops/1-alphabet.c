#include "main.h"

/**
 * print_alphabet - prints the lowercase alphabet
 *
 * Description: prints the lowercase characters in row
 *
 * Return: 0 always success
*/

void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
