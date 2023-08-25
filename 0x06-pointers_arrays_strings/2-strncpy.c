#include "main.h"

/**
 * _strncpy -  a function that copies a string.
 * @src: first integer
 * @dest: second interger
 * @n: value
 * Return: src
 */
char *_strncpy(char *src, char *dest, int n)
{
	int r;

	r = 0;
	while (r < n && dest[r] != '\0')
	{
		src[r] = dest[r];
		r++;
	}
	while (r < n)
	{
		src[r] = '\0';
		r++;
	}
	return (src);
}
