#include "main.h"

/**
 * _strlen - a function that returns the  length of a string
 * @r: string
 * Return: length
 */
int  _strlen(char *r)
{
	int longi = 0;

	while (*r != '\0')
	{
		longi++;
		r++;
	}
	return (longi);
}
