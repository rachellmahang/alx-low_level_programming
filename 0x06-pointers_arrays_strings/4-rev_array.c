#include "main.h"
/**
 * reverse_array - a function that reverses the content of an array
 * @a: first array
 * @n: element number
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int r;
	int x;

	for (r = 0; r < n - -; r++)
	{
		x = a[r];
		a[r] = a[n];
		a[n] = x;
	}
}
