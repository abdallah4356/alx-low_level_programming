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
 * argstostr - concatenates all of it
 *
 * @ac: argument count
 * @av: argument vector
 *
 * Return: null
*/

char *argstostr(int ac, char **av)
{
	int x = 0, n = 0, f = 0, r = 0;
	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; x < ac; x++, n++)
		n += _strlen(av[x]);

	string = malloc(sizeof(char) * n + 1);
	if (string == 0)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (f = 0; av[x][f] != '\0'; f++, r++)
			string[r] = av[x][f];

		string[r] = '\n';
		r++;
	}
	string[r] = '\0';
	return (string);
}
