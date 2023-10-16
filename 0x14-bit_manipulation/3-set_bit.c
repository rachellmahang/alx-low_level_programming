#include "main.h"
/**
 * set_bit - a function that is use to create the value
 * @n: is the pointer
 * @index: is the input
 * Return: a mentioned
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
