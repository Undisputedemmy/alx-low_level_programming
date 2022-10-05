#include "lists.h"
/**
 *add_dnodeint_end - add node at the end of list
 *@head: pointer to pointer to list
 *@n: int
 *Return: addres new element, NULL if failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
		*head = newnode;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		newnode->prev = temp;
		temp->next = newnode;
	}
	return (*head);
}
