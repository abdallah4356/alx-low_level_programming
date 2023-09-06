#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - counts the len
 *
 * @s: the string itself
 *
 * Return: the string length
*/

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}

/**
 * str_concat - concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: concatenated string
*/

char *str_concat(char *s1, char *s2)
{
	int z1, z2, x;
	char *t;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	z1 = _strlen(s1);
	z2 = _strlen(s2);
	t = (char *)malloc((z1 + z2) * sizeof(char) + 1);
	if (t == 0)
		return (0);

	for (x = 0; x <= z1 + z2; x++)
	{
		if (x < z1)
			t[x] = s1[x];
		else
			t[x] = s2[x - z1];
	}
	t[x] = '\0';
	return (t);
}
