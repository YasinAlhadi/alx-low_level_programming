#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of list
 * @idx: index of the list where the new node should be added
 * @n: data of list
 *
 * Return:  address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *tmp;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	tmp = *head;
	if (idx == 0)
	{
		new_node->next  = *head;
		*head = new_node;
		return (*head);
	}
	i = 0;
	while (tmp != NULL)
	{
		if (i == idx - 1)
		{
			new_node->next = tmp->next;
			tmp->next = new_node;
		}
		i++;
		tmp = tmp->next;
	}
	if (i < idx)
		return (NULL);
	return (new_node);
}
