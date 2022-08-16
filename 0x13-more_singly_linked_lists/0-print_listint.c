#include "lists.h"

/**
 * print_listint - print elements of list
 * @h: pointer to structure
 * Return: length.
 */

size_t print_listint(const listint_t *h)
{
unsigned int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
