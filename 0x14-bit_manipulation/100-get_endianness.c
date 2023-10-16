#include "main.h"
/**
 * get_endianness - is a function that create and read int byte
 * Return: asmentioned
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	return ((int)(*(c)));
}
