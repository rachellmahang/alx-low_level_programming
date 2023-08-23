#include "main.h"
#include <stdio.h>
/**
 * puts_half - printing the remaining string
 *
 * @str: the string input
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int half, k;

	while (str[len] != '\0')
	{
		len++;
	}

	half = (len - 1) / 2;

	for (k = (half + 1); k < len; k++)
	{
		putchar(str[k]);
	}
	putchar('\n');
}
