#include "main.h"
/**
 * factorial - a function
 * @n: is the value
 * Return: as mentioned
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
	return (n * factorial(n - 1));
}
