#include "lists.h"

/**
 * free_dlistint - function frees a dlistint_t list.
 * @head: is a pointer to the head of a dlistint_t list.
 * Return: Always void.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
