#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * of listint list.
 * @n: integer for the new node to contain
 * @head: pointer to the address of the head of list
 * Return: the address of the new element or
 * NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
