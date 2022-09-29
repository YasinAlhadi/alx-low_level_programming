#include "lists.h"
/**
 * free_dlistint -  free a dlistint_t list
 * @head: head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
