#include "main.h"
#include <stdio.h>
/**
 * reverse_array -  a function that reverses the content of an array
 * @a: first interger
 * @n: is the second interger
 *
 */
void reverse_array(int a, int n)
{
	int r

	for (r = 0; r < n / 2; r++)
	{
		r = a[r];
		a[r] = a[n - r  -1];
		a[n - r -1] = r;
	}
}
