#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the head of the list.
 * Return: the address of the node where the loop
 * starts, or NULL is there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *blue, *tick;

	if (head == NULL || head->next == NULL)
		return (NULL);

	blue = head->next;
	tick = (head->next)->next;

	while (tick)
	{
		if (blue == tick)
		{
			blue = head;

			while (blue != tick)
			{
				blue = blue->next;
				tick = tick->next;
			}

			return (blue);
		}


		blue = blue->next;
		tick = (tick->next)->next;
	}

	return (NULL);
}
