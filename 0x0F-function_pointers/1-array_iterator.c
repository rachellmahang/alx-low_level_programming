#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - is function used to exacutes a function
 * @array: is the array
 * @size: is the size of the array
 * @action: is the pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
