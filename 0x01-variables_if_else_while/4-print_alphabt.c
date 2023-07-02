#include <stdio.h>

/**
 * main - prints lowercase chars
 *
 * Description: a C function that prints the lower chars except q and e
 *
 * Return: 0 always success
*/

int main(void)
{
	int lower = 'a';

	while (lower <= 'z' && lower != 'q' && lower != 'e')
	{	putchar(lower);
		lower++;
	}
		putchar('\n');

		return (0);
}
