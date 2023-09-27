#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - a function that add new nodes
 * @head: is the a double pointer
 * @n: is the interger
 * Return: as mentioned
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
