#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - last digit of a radomly generated number printed
 *  and whether it is greater than 5, less than 6, or 0
 *
 *  Return: Always 0
 */
int main(void)
int main(void)
{
	int n;
	int lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (lastd > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
	}
	else if (lastd == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastd);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
	}
	return (0);
}
