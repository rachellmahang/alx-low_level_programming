#include "stdio.h"
#include "main.h"
/**
 * *_strcpy - a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
 * @src: is the first integer
 * @dest: is the second integer
 * Return: as specified
 */
char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	return (dest);
}
