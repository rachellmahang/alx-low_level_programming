#include "main.h"

/**
 *  _strchr -  a function that locates a character in a string
 *  @s: is the string
 *  @c: is the character
 *  Return: as mentioned
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')

	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
