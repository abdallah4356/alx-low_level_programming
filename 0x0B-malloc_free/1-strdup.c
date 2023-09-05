#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a ptr to a duplicated string
 *
 * @str: the string pointer and first char
 *
 * Return: pointer to a newely allocated peice of memory
*/

char *_strdup(char *str)
{
	int x = 0, size = 0;
	char *t;

	if (str == NULL)
		return (NULL);


	for (; str[size] != '\0'; size++)
	;

	t = malloc(size * sizeof(*str) + 1);

	if (t == 0)
		return (NULL);

	else
	{
		for (; x < size; x++)
			t[x] = str[x];
	}
	return (t);
}
