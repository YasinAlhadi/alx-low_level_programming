#include "lists.h"
/**
 * _strleng - gets srting length
 * @str: string
 *
 * Return: string length
 */
_strleng(const char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * add_node -  adds a new node at the beginning of a list_t list.
 * @head: head of linked list
 * @str: string to be add
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *string;
	int length;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	if (str == NULL)
	{
		string = NULL;
		length = 0;
	}
	else
	{
		string = strdup(str);
		length = _strleng(str);
	}
	new_node->len = length;
	new_node->str = string;
	new_node->next = *head;
	head = new_node;
	return (*head);
}
