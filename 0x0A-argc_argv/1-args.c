#include <stdio.h>

/**
 * main - prints num of args
 *
 * @argc: the arg count
 * @argv: the list
 *
 * Retrun: the arg count
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
