#include "main.h"

/**
 * string_toupper - a function that changes all lowercase to uppercase
 * @s: value
 * Return: as mentioned
 */
char *string_toupper(char *s)
{
	int r = 0;

	while (s[r] != '\0')
	{
		if (s[r] >= 'a' && s[r] <= 'z')
		{
			s[r] = s[r] - 32;
		}
		r++;
	}
	return (s);
}
