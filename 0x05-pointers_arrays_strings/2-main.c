#include "main.h"
#include <stdio.h>

/**
 * main - a function that returns a length of a string
 *
 * return: always 0
 */
int main(void)
{
	char *str;
	int len;

	str = "my first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
