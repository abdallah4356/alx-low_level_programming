#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 *
 * @name: the name pointer
 * @f: the pointer to the function
 *
 * Return: a pointer to the function
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
