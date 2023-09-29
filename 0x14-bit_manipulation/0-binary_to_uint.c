#include <stdbool.h>
#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - a function that convert binary to unsigned int
 * @b: a ppointer to the string
 * Return: As mentioned
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;

	if (b == 0)
	{
		return (0);
	}

	while (*b)

	{
		if (*b == '1')
		{
			i = (i << 1) | 1;
		}
		else if (*b == '0')
		{
			i = i<< 1;
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (i);
}
