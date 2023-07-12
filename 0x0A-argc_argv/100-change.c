#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the cents
 *
 * @argc: the arg count
 * @argv: the arg value
 *
 * Return: 0 if success and 1 if not
*/

int main(int argc, char *argv[])
{
	int r, l = 0, m = atoi(argv[1]);
	int p[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{

		for (l = 0; l < 5; l++)
			{
			if (m >= p[l])
				{
				r += m / p[l];
				m = m % p[l];
				if (m % p[l] == 0)
					{
						break;
					}
				}
			}
	}
	printf("%d\n", r);

	return (0);
}
