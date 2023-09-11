#include <stdio.h>

/**
 * main - prints the name of the compiled from file
 *
 * Description: just prints the name of compilation with __file__
 *
 * Return: the compiled from file name
*/

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
