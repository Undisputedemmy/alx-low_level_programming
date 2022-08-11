#include "lists.h"

/**
 * print_list - print elements of list
 * @h: pointer to structure
 * Return: length.
 */



size_t print_list(const list_t *h)
{

unsigned int i = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		i++;
	}
	return (i);
}
