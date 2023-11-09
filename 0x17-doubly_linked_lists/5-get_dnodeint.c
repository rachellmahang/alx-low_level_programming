#include "lists.h"

/**
 * get_dnodeint_at_index - a function that return the nth node
 * @head: the head of the list
 * @index: is the interger
 * Return: as mentioned
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
	if (count == index)
	return (head);
	count++;
	head = head->next;
	}

	return (NULL);
}
