#include "lists.h"

/**
 * get_dnodeint_at_index - this function returns the nth node of
 * a dlistint_t linked list.
 *
 * @head: this is a pointer to the head of a dlistint_t list.
 * @index: is the position of the node in the list.
 * Return: a pointer to the node, or NULL if not exists.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)

{

	dlistint_t *current;



	unsigned int n = 0;



	current = head;



	if (head == NULL)

		return (NULL);

	while (current)

	{

		if (n == index)

			return (current);

		current = current->next;

		n++;

	}

	return (NULL);

}
