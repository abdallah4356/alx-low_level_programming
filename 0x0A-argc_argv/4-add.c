#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds all given +numbers
 *
 * @argc: the argument counter
 * @argv: the argument vector
 *
 * Return: 0 Always success
*/

int main(int argc, char *argv[])
{
	int m = 0;
	char *u;
	
	while (--argc)
	{
		for (u = argv[argc]; *u; u++)
			if (*u < 48 || *u > 57)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				m += atoi(argv[argc]);
			}
	}
	printf("%d\n", m);
	return (0);
}
