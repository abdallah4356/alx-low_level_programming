#include <stdio.h>

/**
 * main - printing two digits combination
 *
 * Description: a C function that prints all possible combination of two digits
 *
 * Return: 0 Always success
*/

int main(void)
{
	int n = 48;
	int j = 48;

	while (n <= 56)
	{
		putchar(n);
		n++;
	}
	while (j <= 57)
	{
		putchar(n);

		if (j != 57)
		{
			putchar(',');
			putchar(' ');
		}
		j++;
	}
	putchar('\n');
	return (0);
}
