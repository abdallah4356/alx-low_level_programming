#include <stdio.h>

/**
 * main - prints digits
 *
 * Description: prints the digits in seperate combination
 *
 * Return: 0 always success
*/

int main(void)
{
	int n = 48;

	while (n <= 56)
	{
		putchar(44);
		putchar(32);
		n++;
	}
	if (n == 57)
		putchar(n);
	putchar('\n');

	return (0);
}
