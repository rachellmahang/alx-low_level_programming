#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strstr - a function that locates substring
 * @haystack: is the string
 * @needle: value
 * Return: As mentioned
 */
char *_strstr(char *haystack, char *needle);
{
	size_t needle_len = strlen(needle);

	for (; *haystack; haystack++)
	{
		if (!strncmp(haystack, needle, needle_len))
		{
			return (haystack);
		}
	}
	return (NULL);
}
