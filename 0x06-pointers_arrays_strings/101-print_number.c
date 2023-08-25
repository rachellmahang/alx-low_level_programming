#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer
 * Return: 0
 */

void print_number(int n)
{
	unsigned int r1;

	r1 = n;

	if (n < 0)
	{
		_putchar('-');
		r1 = -n;
	}

	if (r1 / 10 != 0)
	{
		print_number(r1 / 10);
	}
	_putchar((r1 % 10) + '0');
}
