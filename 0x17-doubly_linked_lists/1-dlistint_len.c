#include "lists.h"

/**
 * dlistint_len - this function number of elements in a linked dlistint_t list.
 * @h: is a pointer to head of a dlistint_t list.
 * Return: size of dlistint_t list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;

	size_t n = 0;

	if (h == NULL)
		return (n);
	while (current)
	{
		n++;
		current = current->next;
	}
	return (n);
}
