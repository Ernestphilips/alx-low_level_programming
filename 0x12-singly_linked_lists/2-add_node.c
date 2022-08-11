#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning
 * list_t
 * @head: head of the linked list
 * @str: string to store in list
 * Return: address of the head
 */

list_t *add_node(list_t **head, const char *str)
{
	char *nb;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	nb = strdup(str);
	if (nb == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = nb;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
