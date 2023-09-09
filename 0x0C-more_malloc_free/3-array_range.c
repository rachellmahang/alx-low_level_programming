#include <stdlib.h>
#include "main.h"
/**
 * array_range - is the function for the array
 * @min: is the range
 * @max: is the range
 * Return: as mentioned
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		arr[i] = min;

	return (arr);
}
