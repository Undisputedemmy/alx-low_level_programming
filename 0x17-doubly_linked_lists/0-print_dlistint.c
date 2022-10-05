#include "lists.h"
/**
 * print_dlistint - print elements of list
 * @h: pointer to structure
 * Return: length.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
