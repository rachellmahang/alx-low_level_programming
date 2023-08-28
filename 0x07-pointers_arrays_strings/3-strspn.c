#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 *  _strpn -  a function that gets the length of a prefix substring.
 *  @s: initial segment
 *  @accept: value of byte
 *  Return: as mentioned
 */
unsigned int _strspn(char *s, char *accept)
{
	size_t len = 0;

	while (*s && strchr(accept, *s++))
	{
		len++;
	}
	return (len);
}
