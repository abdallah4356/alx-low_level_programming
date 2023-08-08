#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to the first character of a duplicated string
 *
 * @str: the string itself
 *
 * Return: a pointer to the duplicated string
*/

char *_strdup(char *str)
{
	char *d;

	if (str == NULL)
	return (NULL);

	d = malloc((strlen(str) + 1) * sizeof(char));
	if (d == NULL)
	return (NULL);

	strcpy(d, str);
	return (d);
}
