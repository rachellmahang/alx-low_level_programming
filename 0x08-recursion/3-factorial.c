#include "main.h"

/**
 *  factorial - a function that returns a factorial of a number
 *  @n: is the string
 *  Return: as mentioned
 */
int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n = factorial(n - 1));
}
