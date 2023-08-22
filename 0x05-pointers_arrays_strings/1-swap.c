#include "main.h"

/**
 * swap_int - a function that swap the values of intergers
 * @a: interger to swap
 * @b: interger to swap
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
