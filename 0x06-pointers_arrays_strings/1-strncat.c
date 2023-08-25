#include "main.h"

/**
 * _strncat -  a function that concatenates two strings.
 * @src: first integer
 * @dest: second integer
 * @n: third integer
 * Return: src
 */
char _strncat(char src, char dest, int n)
{
	int r;
	int x;

	r = 0;
	while (src[r] != '\0')
	{
		r++;
	}
	x = 0;
	while (x < n && dest[x] != '\0')
	{
		src[r] = dest[x];
		r++;
		x++;
	}
	src[r] = '\0';
	return (src);
}
