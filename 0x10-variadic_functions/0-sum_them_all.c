#include <stdio.h>
#include "variadic_functions"

/**
 * sum_of_elements - function that returns all parameters
 * @array: is the array
 * @size: is the size of the array
 * Return: as mentioned
 */

int sum_of_elements(int *array, int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += array[i];
	}
	return (sum);
}
