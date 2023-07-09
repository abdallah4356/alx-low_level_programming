#include <stdio.h>

/**
 * main - prints the name of the program
 *
 * @argc: is the arg count
 * @argv: is the value of the args
 *
 * Return: the name of the programm
*/
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
