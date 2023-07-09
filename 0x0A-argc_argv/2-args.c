#include <stdio.h>

/**
 * main - prints the args
 *
 * @argc: the arg count
 * @argv: the arg vector
 *
 * Return: 0 Always success
*/

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	printf("%s\n", argv[n]);
	return (0);
}
