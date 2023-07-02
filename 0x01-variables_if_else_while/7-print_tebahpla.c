#include <stdio.h>

/**
 * main - prints the alpha in reverse
 *
 * Description: a C function that prints the alphabet in reverse
 *
 * Return: 0 Always success
*/

int main(void)
{
	int num = 'z';

	while (num >= 'a')
	{
		putchar(num);
		num--;
	}
	putchar('\n');

	return (0);
}
