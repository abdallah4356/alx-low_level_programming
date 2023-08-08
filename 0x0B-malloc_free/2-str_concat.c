#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - a function that concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 0 Always success
*/

char *str_concat(char *s1, char *s2)
{
	char *oc;
	size_t e1, e2;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	e1 = strlen(s1);
	e2 = strlen(s2);
	oc = malloc((e1 + e2 + 1) * sizeof(char));

	strcpy(oc, s1);
	strcat(oc, s2);

	return (oc);

}
