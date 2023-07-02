#include <stdio.h>

/**
 * main - prints digits
 *
 * Description: a C function that prints all digits from 0
 *
 * Return: 0 success always
*/

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	return (0);
}
