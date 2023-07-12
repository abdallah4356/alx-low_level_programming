#include <stdio.h>
#include <stdlib.h>

/**
 * main - a C programm that adds two ints
 *
 * @argc: the arg com
 * @argv: the arg vector
 *
 * Return: 0 Always success
*/

int main(int argc, char *argv[])
{
	if (argv >= '0' && argv <= '9')
	{
	int sum;

	sum += atoi(argv[argc]);
	printf("%d\n", sum);
	}
	else if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
