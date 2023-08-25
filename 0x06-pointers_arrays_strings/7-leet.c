#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _leet - as function that encode a string
 * @str: is the string 
 * Return: a mentioned
 */
char *leet(char *str)
{
	int r = 0;
	int x = 0;
	char leet[] = "4433007711";
	char letter[] = "aAeEoOtTlL";

	while (str[i])
	{
		r = 0;
		while (letter[j])
		{
			if (str[x] == letter[r])
			{
				str[r] = leet[r];
			}
			r++;
		}
		x++;
	}
	return (str);
}
