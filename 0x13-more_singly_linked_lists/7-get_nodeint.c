#include "lists.h"

/**
 * get_nodeint_at_index - returns a nth node of listint_t
 * @head: pointer to the head of the list
 * @index: integer
 * Return: NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
