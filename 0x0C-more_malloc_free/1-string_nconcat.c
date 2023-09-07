#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 * @n: the size
 *
 * Return: concatenated strings
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int x, f, s1_l, s2_l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_l = 0; s1[s1_l] != '\0'; s1_l++)
		;
	for (s2_l = 0; s2[s2_l] != '\0'; s2_l++)
		;

	s = malloc(s1_l + n + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (x = 0; s1[x] != '\0'; x++)
		s[x] = s1[x];
	for (f = 0; f < n; f++)
	{
		s[x] = s2[f];
	x++;
	}
	s[x] = '\0';
	return (s);
}
