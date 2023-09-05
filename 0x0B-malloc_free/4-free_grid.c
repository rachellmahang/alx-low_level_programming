#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional grid
 * @grid: is the string
 * @height: the second string
 * Return: as mentioned
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grit == NULL || height <= 0)
	{
		return;
	}
	while (i < height)
	{
		free(grit[i]);
		i++;
	}
	free(grid);
}
