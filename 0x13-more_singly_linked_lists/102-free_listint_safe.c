#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - counts the number of unique nodes.
 * @head: pointer to the head of the list.
 * Return: if the list isn't looped - 0.
 * Otherwise - number of unique nodes in the list.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *blue, *tick;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	blue = head->next;
	tick = (head->next)->next;

	while (tick)
	{
		if (blue == tick)
		{
			blue = head;
			while (blue != tick)
			{
				nodes++;
				blue = blue->next;
				tick = tick->next;
			}

			blue = blue->next;
			while (blue != tick)
			{
				nodes++;
				blue = blue->next;
			}

			return (nodes);
		}

		blue = blue->next;
		tick = (tick->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to the address of the head of list.
 * Return: the size of the list that was free'd.
 * Description: the function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
