#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - a function that print a string
 * @s: is the string
 * Return: as mentioned
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
