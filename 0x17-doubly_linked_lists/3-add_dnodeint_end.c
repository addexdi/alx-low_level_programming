#include "lists.h"

/**
 * add_dnodeint_end - function adds a new node at the end of a dlistint_t list.
 * @head: this is a pointer to base of a dlistint_t list.
 * @n: this is an integer representing data.
 * Return: Address of new element or NULL if failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current, *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new;
	new->prev = current;

	return (new);
}
