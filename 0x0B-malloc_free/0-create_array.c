#include "main.h"
#include <stdlib.h>

/**
 * create_array - comment of char
 * @c: is the char
 * @size: number
 * Return: As mentioned
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
