#include <stdio.h>

/**
 * main - prints characters in lowercase
 *
 * Description: prints the characters in lowercase from 0 to f
 *
 * Return: 0 always success
*/

int main(void)
{
	int nums = 48;
	int chars = 97;

	while (nums <= 57)
	{
		putchar(nums);
		nums++;
	}
	while (chars <= 102)
	{
		putchar(chars);
		chars++;
	}
	putchar('\n');

	return (0);
}
