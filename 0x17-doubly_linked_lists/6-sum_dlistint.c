#include "lists.h"

/**
 * sum_dlistint - function sum of all the data (n) of a dlistint_t linked list.
 * @head: is a pointer to the head of a dlistint_t list.
 * Return: sum of all data in the list, 0 if empty.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	int sum = 0;

	if (head == NULL)
		return (0);

	current  = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
