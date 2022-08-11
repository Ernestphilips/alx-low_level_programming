#include "lists.h"

/**
 * free_list - function that frees list_t
 * @head: a pointer
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
