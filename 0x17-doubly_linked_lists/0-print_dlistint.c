#include "lists.h"

/**
 * print_dlistint - this function prints all the elements of a dlistint_t list.
 * @h: is a pointer to the head of a dlistint_t list
 * Return: the number of nodes size_t
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;

	size_t n = 0;

	if (h == NULL)
		return (n);
	while (current)
	{
		n++;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (n);
}
