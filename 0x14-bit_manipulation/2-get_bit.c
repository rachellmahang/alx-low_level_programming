#include "main.h"
/**
 * get_bit - is the function to get bit from given index
 * @n: is the input
 * @index: is the array
 * Return: as mentioned
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);
	return ((n >> index) & 1);
}
