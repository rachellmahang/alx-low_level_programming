#include "main.h"
/**
 * print_numbers - is the main function
 *
 * Return: as specified
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');
}
