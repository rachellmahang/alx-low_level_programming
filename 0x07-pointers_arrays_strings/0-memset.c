#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: is the pointer
 * @b: second value
 * @n: is the value
 * Return: as mentioned
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
