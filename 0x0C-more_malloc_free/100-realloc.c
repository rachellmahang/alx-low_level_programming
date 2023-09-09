#include <stdlib.h>
#include "main.h"
/**
 * _realloc - is the function to change size of memory
 * @ptr: is the string
 * @old_size: is the size
 * @new_size: is the size
 * Return: as specified
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	return (realloc(ptr, new_size));
}
