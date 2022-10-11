#include "lists.h"

/**
 * delete_dnodeint_at_index - function
 * deletes the node at index index of a dlistint_t linked list.
 *
 * @head: this is a pointer to the base of a dlistint_t list.
 * @index: this is the position of node to delete.
 * Return: 1 if succeeded, -1 otherwise.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}
	if (tmp == *head)
	{
		*head = tmp->next;
		(*head)->prev = NULL;
	}
	else
	{
		tmp->prev->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;
	}
	free(tmp);
	return (1);
}
