#include <stdio.h>

/**
 * main - a function that print the name of the file it was compile from
 * Description: file name
 * Return: as mentioned
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
