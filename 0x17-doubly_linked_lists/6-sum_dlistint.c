#include "lists.h"
/**
 * sum_dlistint - return the sum of all the data (n) of linked list
 * @head: head of list
 *
 * Return: 0 if  list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum = 0;

	if (head == NULL)
		return (sum);
	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
