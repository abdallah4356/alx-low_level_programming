#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of multiplication
 *
 * @argc: the argument counter
 * @argv: the argument vector
 *
 * Return: 0 always
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int m;

		m = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", m);
	}
	return (0);
}
