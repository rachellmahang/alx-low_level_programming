#include "main.h"
#include <math.h>

/**
 *  _pow_recursion - a function returning the values
 *  @x: the string
 *  @y: value
 *  Return: as mentioned
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
