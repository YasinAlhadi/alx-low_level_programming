#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: head of lists
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		count++;
		if (h->str == NULL)
			printf("[%d] (nil)\n", 0);
		else
			prinf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (count);
}
