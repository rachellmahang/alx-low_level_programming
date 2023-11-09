#include "lists.h"

/**
 * sum_dlistint - a function that return the function of data
 * @head: head of the list
 * Return: as mentioned
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
	sum += head->n;
	head = head->next;
	}

	return (sum);
}
