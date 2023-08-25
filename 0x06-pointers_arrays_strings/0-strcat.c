
#include "main.h"

/**
 * _strcat -  a function that concatenates two strings
 * @src: first interger
 * @dest: second interger
 * Return: void
 */
char _strcat(char src, dest)
{
	int r;
	int x;

	r = 0;
	while (src[r] != '\0')
	{
		r++;
	}
	x = o;
	while (dest[x] != '\0')
	{
		src[r] = dest[x];
		r++;
		x++;
	}
	src[r] = '\0';
	return (src);
}
