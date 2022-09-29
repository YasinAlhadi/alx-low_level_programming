#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: list head
 * @idx: index of the list where the new node should be added
 * @n: list data
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *ptr, *temp;

	newNode = malloc(sizeof(dlistint_t));
	ptr = *h;
	temp = NULL;
	if (*h == NULL)
		return (NULL);
	while (idx != 1)
	{
		ptr = ptr->next;
		idx--;
	}
	newNode->n = n;
	temp = ptr->next;
	ptr->next = newNode;
	temp->prev = newNode;
	newNode->prev = ptr;
	newNode->next = temp;

	return (newNode);
}
