#include "lists.h"
/**
 * free_listint2 -  frees a listint_t list.
 * @head: head of list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (*head == NULL || head == NULL)
		return;
	else if (*head->next == NULL)
		free(*head);
	else
	{
		while (*head != NULL)
		{
			tmp = *head;
			*head = (*(head))->next;
			free(tmp);
		}
	}
	*head = NULL;
}
