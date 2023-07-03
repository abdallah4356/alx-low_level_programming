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
	int n = 0, j;

	while (n <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			if (n != j && n < j)
			{
				putchar(n + 48);
				putchar(j + 48);

				if (n + j != 17)
				{
					putchar(',');
					putchar(' ');
				}
			j++;
			}
		n++;
		}
	}
	putchar('\n');

	return (0);
}
