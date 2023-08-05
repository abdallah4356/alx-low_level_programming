#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 *
 * @argc: the arg count
 * @argv: the arg value
 *
 * Return: 0 Always success
*/

int main(int argc, char **argv)
{
	int result = 0;
	char *p;

	while (--argc)
	{
		for (p = argv[argc]; *p; p++)
			if (*p < 48 || *p > '9')
			{
				printf("Error");
				return (1);
			}
			else
			result += atoi(argv[argc]);
	}
	printf("%d\n", result);
	return (0);
}
