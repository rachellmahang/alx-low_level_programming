#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_chessboard - function that print the chessboard
 * @a: value
 * @[8]: value
 * Return: as mentioned
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
