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
	printf("%s \n", argv[argc-1]);
	return (0);
}
