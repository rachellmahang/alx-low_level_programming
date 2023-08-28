#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints two diagonal
 * @a: is the string
 * @size:value
 *
 *
 */
void print_diagsums(int *a, int size)
{
	int i = 0, sum1 = 0, sum2 = 0;

	while (i < size)
	{
		sum1 += a[(size + 1) * i];
		sum2 += a[(size - 1) * (i + 1)];
		i++;
	}
	printf("%d\n", sum1);
	printf("%d\n", sum2);
}
