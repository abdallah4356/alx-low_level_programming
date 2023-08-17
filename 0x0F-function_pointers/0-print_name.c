#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 *
 * @name: the name
 * @f: the pointer to the function that is printing a name
 *
 * Return: a pointer to the function
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	f(name);
}
