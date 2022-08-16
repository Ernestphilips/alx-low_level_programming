#include "lists.h"

/**
 * pop_listint - deletes the head node of listint_t
 * @head: pointer to the address of the head of listint_t
 * Return: head of node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
