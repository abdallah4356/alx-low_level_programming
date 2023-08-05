#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two nums
 *
 * @argc: the arg count
 * @argv: the arg value
 *
 * Return: 1 if they're not 2 nums, otherwise return 0
*/

int main(int argc, char **argv)
{
	int sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
		return (0);
	}
}
