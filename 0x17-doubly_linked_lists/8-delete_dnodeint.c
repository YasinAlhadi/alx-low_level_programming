#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: list head
 * @index: index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *prevNode, *temp;

	temp = *head;
	prevNode = *head;
	if (index == 0 && *head)
	{
		if ((*head)->next != NULL)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
			free(temp);
		}
		else
			*head  = NULL;
		return (1);
	}
	while (i < index -1 && prevNode)
	{
		prevNode = prevNode->next;
		i++;
	}
	if (prevNode != NULL)
	{
		temp = prevNode->next;
		if (temp->next)
			temp->next->prev = prevNode;
		prevNode->next = temp->next;
		free(temp);
		return (1);
	}
	return (-1);
}
