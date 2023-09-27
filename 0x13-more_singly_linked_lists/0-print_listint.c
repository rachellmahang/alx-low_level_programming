#include <stdio.h>
#include "lists.h"

/**
 * print_listint - a function that prints all elements
 * @h: is the string
 * Return: as mentioned
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		nodes++;
	}
	return (nodes);
}
