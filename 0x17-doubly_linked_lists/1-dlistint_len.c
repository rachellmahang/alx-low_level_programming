#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - a function that return the number of elements
 * @head: head of the list
 * Return: as mentioned
 */

size_t dlistint_len(dlistint_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		count++;
		head = head->next;
	}

	return (count);
}
