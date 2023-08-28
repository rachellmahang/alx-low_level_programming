#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strpbrk -  a function that searches a string for any set of byte
 * @s: is the string
 * @accept: string bytes
 * Return: as mentioned
 */
char *_strpbrk(char *s, char *accept)
{
	for (; *s != '\0'; s++)
	{
		if (strchr(accept, *s))
		{
			return (s);
		}
	}
	return (NULL);
}
