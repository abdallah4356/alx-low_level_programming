#include "main.h"

/**
 * _strlen - counts the string lenght
 *
 * @s: the pointer of the first character
 *
 * Return: 0 Always success
*/

int _strlen(char *s)
{
	int i = 0;
		while (s[i] != '\0')
			i++;
		return (i);
}
