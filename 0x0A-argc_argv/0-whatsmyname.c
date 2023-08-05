#include <stdio.h>

/**
 * main - a function that prints it's name
 *
 * @argc: the arg count
 * @argv: the value of the arguments
 *
 * Return: 0 Always success
*/

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
