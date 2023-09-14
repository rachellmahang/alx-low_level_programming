#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - a function that exacutes a function
 * @array: is the array
 * @size: is the pointer
 * @f: is the pointer
 */

void array_iterator(int *array, int size, void (*f)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (int i = 0; i < size; i++)
	{
		f(array[i]);
	}
}
