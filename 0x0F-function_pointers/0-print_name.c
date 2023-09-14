#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - a function that prints a name
 * @name: it a pointer
 * @f: is the name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
/**
 * print - a function that prints a name
 * @name: is the pointer
 */
void print(char *name)
{
	printf("%s\n", name);
}
