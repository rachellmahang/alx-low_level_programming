#include "main.h"
/**
 * sqrt_a - a function that return the natural square root
 * @a: a string
 * @b: second string
 * Return: square root
 */
int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}
/**
 * _sqrt_recursion - a function that returns the natural square root
 * @n: value
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
