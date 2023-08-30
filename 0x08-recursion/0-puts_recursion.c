#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - a function that prints a string
 * @s: this is the string
 * Return: as mentioned
 */
void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		printf("\n");
		return (0);
	}
	printf("%c", *s);
	_puts_recursion(s + 1);
	return (0);
}
