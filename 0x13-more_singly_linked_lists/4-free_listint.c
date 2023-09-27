#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - a function that free a list
 * @head: is he pointer
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
