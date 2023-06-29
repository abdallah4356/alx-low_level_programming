#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - checks if the last digit of n is greater than or less than 5 or = 0
 *
 * Description: printing the last digit of n
 *
 * Return: 0 (success)
*/

int main(void)
{
	int n, ldigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldigit = n % 10;

	if (ldigit > 5)
		printf("Last digit of %d is %d and is greater than 5", n, ldigit);
	else if (ldigit == 0)
		printf("Last digit of %d is 0 and is 0", n);
	else if (ldigit < 6 && ldigit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, ldigit);

	printf("\n");
	return (0);
}
