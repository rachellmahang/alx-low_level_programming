#include "main.h"
/**
 * flip_bits -a function used to flip bits and return no of bits
 * @n: is the input
 * @m: is the input
 * Return: as mentioned
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_val = n ^ m;
	unsigned int flip = 0;

	while (xor_val)
	{
		flip += xor_val & 1;
		xor_val >>= 1;
	}
	return (flip);
}
