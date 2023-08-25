#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: string
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int r;
	int x;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (r = 0; s[r] != '\0'; r++)
	{
		for (x = 0; x < 52; x++)
		{
			if (s[x] == data1[x])
			{
				s[r] = datarot[x];
				break;
			}
		}
	}
	return (s);
}
