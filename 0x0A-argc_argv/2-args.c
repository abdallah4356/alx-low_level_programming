#include <stdio.h>

/**
 * main - prints all the arguments it recieves
 *
 * @argc: the arg count
 * @argv: the arg value
 *
 * Return: the argumets including the first one
*/

int main(int argc, char **argv)
{
	int argrounds = 0;

	while (argc--)
	{
		printf("%s\n", argv[argrounds]);
		argrounds++;
	}
	return (0);
}
