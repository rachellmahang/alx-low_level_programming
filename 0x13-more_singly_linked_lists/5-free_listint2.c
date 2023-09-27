#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - a function that freshen a list
 * @head: is the pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *temp
	listint_t *current = *head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}

	*head = NULL;
}
