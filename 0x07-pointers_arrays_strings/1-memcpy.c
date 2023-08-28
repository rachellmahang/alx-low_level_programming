#include "main.h"

/**
 * _memcpy -  a function that copies memory area.
 * @dest: memory erea
 * @src: second memeory erea
 * @n: is the value
 * Return: as mentioned
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
