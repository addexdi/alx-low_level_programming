#include "lists.h"

/**
 * add_dnodeint - function adds a new node at the
 * beginning of a dlistint_t list.
 *
 * @head: is a pointer to the base of a dlistint_t list.
 * @n: is an integer representing dlistint_t list data.
 * Return: a pointer to the added element or NULL if failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;

	*head = new;

	return (new);
}
