#include <stdio.h>
#include "lists.h"
/**
 * premain - is the function
 * constructor: is the attribute
 * attribute: is the main function called before execution
 */
void __attribute__((constructor)) premain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
