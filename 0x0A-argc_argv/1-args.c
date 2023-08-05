#include <stdio.h>

/**
 * main - prints the number of arguments passed
 *
 * @argc: the args count
 * @argv: the args value
 *
 * Return: the number of arguments passed to the program
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
