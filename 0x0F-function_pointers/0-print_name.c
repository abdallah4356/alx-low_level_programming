#include "function_pointers.h"

/**
 * print_name - a func that prints a name
 *
 * @name: the pointer of the name
 * @f: the function pointer
 *
 * Return: the given name
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
