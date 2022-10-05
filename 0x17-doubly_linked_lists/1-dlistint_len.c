#include "lists.h"
/**
 *dlistint_len - number of elements in list
 *@h: pointer to list
 *Return: length.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
