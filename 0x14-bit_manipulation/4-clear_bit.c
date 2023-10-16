#include "main.h"
/**
 * clear_bit - a function that set value of bit to 0
 * @n: is the pointer
 * @index: is the element
 * Return: as mentioned
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
