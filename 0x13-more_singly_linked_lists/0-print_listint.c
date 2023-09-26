#include <stdio.h>
#include "lists.h"

/**
 * print_list - a function that prints all elements
 * @head: is the string
 */

void print_list(listint_t *head)
{
	listint_t *current = head;

	while (current != NULL)
	{
		printf("%d\n", current->n)
		current = current->next;
	}
}
