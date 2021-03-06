#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h: head of a list.
 *
 * Return: numbers of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
