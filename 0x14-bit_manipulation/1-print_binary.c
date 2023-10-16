#include "main.h"
/**
 * print_binary - a function that print binary to numbers
 * @n: is the input
 * Return: as mentioned
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
