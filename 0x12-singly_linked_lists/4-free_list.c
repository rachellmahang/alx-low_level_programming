#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a list
 * @head: is the pointer
 */
void free_list(list_t *head)
{
	list_t *i;

	if (!head)
		return;
	while ((i = head) != NULL)
	{
		head = head->next;
		free(i->str);
		free(i);
	}
}
