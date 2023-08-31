#include "main.h"
/**
 * sqrt_a - function that return the natural root 
 * a number
 * @a: first value
 * @b: second value
 * Return: -1
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
 * _sqrt_recursion - function that returns the natural root
 * a number
 * @n: the interger
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
