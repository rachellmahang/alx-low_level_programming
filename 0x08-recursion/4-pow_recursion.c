#include "main.h"
#include <math.h>
/**
 * _pow_recursion - is the function that returns the value to the power
 * @x: is the string
 * @y: is the value
 * Return: as specified
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
