#include <stdio.h>
/**
 * main - program that prints agruments received
 * @argc: that accept command
 * @argv: is the array
 * Return: as mentioned
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
