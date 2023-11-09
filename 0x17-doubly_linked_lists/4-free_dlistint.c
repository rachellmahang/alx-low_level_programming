#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - a function that frees
 * @head: is the head of the list
 * Return: as mentioned
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
	tmp = head;
	head = head->next;
	free(tmp);
	}
}
