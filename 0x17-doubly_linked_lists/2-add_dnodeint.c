#include "lists.h"
/**
 *add_dnodeint - add new node at the beggining
 *@head: pointer to pointer to list
 *@n: int
 *Return: address of new element, null if fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		free(NULL);
		return (NULL);
	}
	newnode->n = n;
	newnode->prev = NULL;
	if (*head != NULL)
	{
		newnode->next = *head;
		(*head)->prev = newnode;
	}
	if (*head == NULL)
		newnode->next = NULL;
	*head = newnode;
	return (*head);
}
