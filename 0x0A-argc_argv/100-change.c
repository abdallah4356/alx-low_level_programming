#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the cents
 *
 * @argc: the arg count
 * @argv: the arg value
 *
 * Return: 1 if it's not 1 argument passed otherwise return 0
*/

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int r, result = 0, cash = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (r = 0; r < 5; r++)
		{
			if (cash >= cents[r])
			{
				result += cash / cents[r];
				cash = cash % cents[r];
				if (cash % cents[r] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", result);
	}
}
