#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - counts the number of unique nodes
 * @head: pointer to the head of the listint_t list
 * Return: the number of nodes in the list
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *blue, *tick;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

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
 * print_listint_safe - prints a listint_t safely.
 * @head: pointer to the head of the listint_t.
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
