#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - a function that prints a string, in reverse, followed by a new line.
 * @s: is the integer
 */
void print_rev(char *s)
{
	char *ptr = s + strlen(s) - 1;

	while (ptr >= s)
	{
		putchar(*ptr);
		ptr--;
	}
	putchar ('\n');
}
