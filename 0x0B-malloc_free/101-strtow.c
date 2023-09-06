#include "main.h"
#include <stdlib.h>

/**
 * counter - counts the number of words in a string
 *
 * @s: a pointer to the first char
 *
 * Return: number of words
*/

int counter(char *s)
{
	int x, o = 0;

	for (x = 0; s[x]; x++)
	{
		if (s[x] == ' ')
		{
			if (s[x + 1] != ' ' && s[x + 1] != '\0')
				o++;
		}
		else if (x == 0)
			o++;
	}
	o++;
	return (o);
}

/**
 * strtow - splits a string into words
 *
 * @str: the string ptr
 *
 * Return: a pointer to an array of strings
*/

char **strtow(char *str)
{
	int x, f, q, r, num = 0, word = 0;
	char **the;

	if (str == NULL || *str == '\0')
		return (NULL);
	num = counter(str);
	if (num == 1)
		return (NULL);
	the = (char **)malloc(num * sizeof(char *));
	if (the == NULL)
		return (NULL);
	the[num - 1] = NULL;
	x = 0;
	while (str[x])
	{
		if (str[x] != ' ' && (x == 0 || str[x - 1] == ' '))
		{
			for (f = 1; str[x + f] != ' ' && str[x + f]; f++)
				;
			f++;
			the[word] = (char *)malloc(f * sizeof(char));
			f--;
			if (the[word] == NULL)
			{
				for (q = 0; q < word; q++)
					free(the[q]);
				free(the[num - 1]);
				free(the);
				return (NULL);
			}
			for (r = 0; r < f; r++)
				the[word][r] = str[x + r];
			the[word][r] = '\0';
			word++;
			x += f;
		}
		else
			x++;
	}
	return (the);
}
