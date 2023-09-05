#include <stdio.h>
/**
 * main - the program that print it name
 * @argc: is the argument count
 * @argv: is the argument array
 * Return: as mentioned
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
