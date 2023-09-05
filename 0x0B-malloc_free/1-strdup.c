#include "main.h"
#include <stdlib.h>

/**
 * _strdup - name of the function
 * @str: is the pointer
 * Return: As mentioned
 */
char *_strdup(char *str)
{
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}
	new_str = strdup(str);
	if (new_str == NULL)
	{
		return (NULL);
	}
	return (new_str);
}
