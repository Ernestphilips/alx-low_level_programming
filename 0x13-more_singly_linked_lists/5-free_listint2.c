#include "lists.h"

/**
 * free_listint2 - frees listint_t and sets head to NULL
 * @head: pointer to the address of head of listint_t
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
