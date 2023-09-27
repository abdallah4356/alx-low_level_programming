#include "lists.h"

/**
 * _strlen - counts the str
 *
 * @s: the string itself
 *
 * Return: the length of the string
*/

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * print_list - prints all the elements inside the list struct
 *
 * @h: the header pointer
 * Return: the elements given to the program
*/

size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		x++;
	}
	return (x);
}
