#include <stdio.h>

/**
 * main - prints the num of the args
 *
 * @argc: the arg count
 * @argv: the value of the arg
 *
 * Return: Always 0 success
*/
int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc-1);
	return (0);
}
