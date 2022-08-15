#include "lists.h"
/**
 * pop_listint - deletes the head node and returns the head node’s data (n)
 * @head: head of list
 *
 * Return: head's node data n
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	tmp = *head;
	n = 0;
	if (*head == NULL)
		return (n);
	*head = tmp->next;
	n = tmp->n;
	free(tmp);
	return (n);
}
