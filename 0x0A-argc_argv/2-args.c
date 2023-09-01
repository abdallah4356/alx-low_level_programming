#include <stdio.h>

/**
 * main - prints all arguments received
 *
 * @argc: the argument conter
 * @argv: the argument vector
 *
 * Return: 0 Always (success)
*/

int main(int argc, char *argv[])
{
	int x = 0;

	while (argc--)
	{
		printf("%s\n", argv[x]);
		x++;
	}
	return (0);
}
