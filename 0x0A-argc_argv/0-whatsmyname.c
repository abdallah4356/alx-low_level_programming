#include <stdio.h>

/**
 * main - prints the first arg
 *
 * @argc: arg count
 * @argv: arg list
 *
 * Retrun: 0 Always
*/

int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
