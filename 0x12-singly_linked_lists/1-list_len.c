#include "lists.h"

/**
 * list_len - counts the number of elements passed to the programm
 *
 * @h: the header pointer
 *
 * Return: the size of the list
*/

size_t list_len(const list_t *h)
{
	size_t o = 0;

	while (h)
	{
		h = h->next;
		o++;
	}
	return (o);
}
