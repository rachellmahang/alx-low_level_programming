#include "listint.h"

/**
 * listint_len - a function that returns the number of elememnts
 * @h: is the string
 * Return: as mentioned
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		nodes++;
	}

	return (nodes);
}
