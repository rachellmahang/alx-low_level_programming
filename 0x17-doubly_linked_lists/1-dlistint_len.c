#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - a function that return the number of elements
 * @h: head of the list
 * Return: as mentioned
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
