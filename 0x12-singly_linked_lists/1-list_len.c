#include "lists.h"

/**
 * list_len - function that lists elements in a linked list_t
 * @h: singly linked list
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t list_of_nodes = 0;

	while (h)
	{
		list_of_nodes++;
		h = h->next;
	}

	return (list_of_nodes);
}
