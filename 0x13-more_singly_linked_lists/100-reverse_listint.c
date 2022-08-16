#include "lists.h"
/**
 * reverse_listint -  reverses a listint_t linked list
 * @head: head of lists
 *
 * Return: reversed list
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *previous;

	previous = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;
	return (*head);
}
