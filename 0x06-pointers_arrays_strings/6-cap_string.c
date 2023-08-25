#include "main.h"

/**
 * cap_string - words of string
 * @str: The string
 *
 * Return: as mention
 */
char *cap_string(char *str)
{
	int input = 0;

	while (str[input])
	{
		while (!(str[input] >= 'a' && str[input] <= 'z'))
			input++;

		if (str[input - 1] == ' ' ||
		    str[input - 1] == '\t' ||
		    str[input - 1] == '\n' ||
		    str[input - 1] == ',' ||
		    str[input - 1] == ';' ||
		    str[input - 1] == '.' ||
		    str[input - 1] == '!' ||
		    str[input - 1] == '?' ||
		    str[input - 1] == '"' ||
		    str[input - 1] == '(' ||
		    str[input - 1] == ')' ||
		    str[input - 1] == '{' ||
		    str[input - 1] == '}' ||
		    r == 0)
			str[r] -= 32;

			r++;
	}

	return (str);
}
