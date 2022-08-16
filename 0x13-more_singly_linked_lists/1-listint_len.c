#include "lists.h"

/**
 * listint_len - returns the number of elements in listint_t
 * @h: a pointer to the head of the list
 * Return: number of elements in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
