#include "lists.h"
/**
 * delete_nodeint_at_index -  deletes the node at index
 * @head: head of list
 * @index:  index of the node that should be deleted
 *
 * Return: 1 if it succeeded or -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node;
	listint_t *prev_node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	current_node  = *head;
	prev_node = *head;
	if (index == 0)
	{
		*head = current_node->next;
		free(current_node);
		return (1);
	}
	i = 0;
	while (current_node->next != NULL)
	{
		if (i == index)
		{
			prev_node->next = current_node->next;
			free(current_node);
			return (1);
		}
		prev_node = current_node;
		current_node = current_node->next;
		i++;
	}
	if (i == index)
	{
		prev_node->next = NULL;
		free(current_node);
		return (1);
	}
	return (-1);
}
