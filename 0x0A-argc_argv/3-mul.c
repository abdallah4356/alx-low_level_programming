#include <stdio.h>

/**
 * main - prints the result
 *
 * @argc: arg count
 * @argv: arg value
 *
 * Return: 0 Always
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
	int result;

	result = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", result);
	}
	return (0);
}
