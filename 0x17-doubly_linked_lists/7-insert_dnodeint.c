#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at index
 * @h: pointer to structure
 * @idx: index of the newnode
 * @n: data
 * Return: addres of the new newnode at index, NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int cont = 0;
	dlistint_t *newnode, *temp, *aux;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	if (idx == 0)
	{
		newnode->n = n;
		newnode->next = *h;
		newnode->prev = NULL;
		if (*h != NULL)
			(*h)->prev = newnode;
		*h = newnode;
		return (*h);
	}
	temp = *h;
	while (temp != NULL)
	{
		if (cont == idx - 1)
		{
			newnode->n = n;
			aux = temp->next;
			temp->next = newnode;
			newnode->next = aux;
			if (aux != NULL)
				aux->prev = newnode;
			newnode->prev = temp;
			return (newnode);
		}
		cont++;
		temp = temp->next;
	}
	return (NULL);
}
