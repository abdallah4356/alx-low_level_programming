#include <stdio.h>

/**
 * main - prints the lowercase alphabet
 *
 * Description: integer has from a to z
 *
 * Return: 0 always success
*/

int main(void)
{
	char a = 'a';
	
	if (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return(0);
}
