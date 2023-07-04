#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints the numbers from n to 98
 *
 * @n: the starting number
 *
 * Return: the numbers to 98
*/

void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n != 98)
			printf("%d, ", n);

		else
			printf("98");
	}n++;
	
	while (n > 98)
	{	printf("%d, ", n);
	}n--;
}
