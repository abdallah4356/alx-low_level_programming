#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min amount of coins
 *
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: 0 Alawys success
*/

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int u, lk = 0, full = atoi(argv[1]);
		int k[] = {25, 10, 5, 2, 1};

		for (u = 0; u < 5; u++)
		{
			if (full >= k[u])
			{
				lk += full / k[u];
				full = full % k[u];
				if (full % k[u] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", lk);
		return (0);
	}
}
