#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - is the function that operate simple operations
 * @array: is the array
 * @size: is the size of the array
 * @cmp: is the pointer
 * Return: as mentioned
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
