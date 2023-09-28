#include <stdbool.h>
#include "main.h"

/**
 * binary_to_uint - a function that convert binary to unsigned int
 * @b: a ppointer to the string
 * Return: As mentioned
 */

unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
	{
		return (0);
	}

	unsigned int num = 0;

	while (*b)

	{
		if (*b == '1')
		{
			num = (num << 1) | 1;
		}
		else if (*b == '0')
		{
			num = num << 1;
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (num);
}
