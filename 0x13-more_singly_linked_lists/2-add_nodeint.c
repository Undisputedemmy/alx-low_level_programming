#include "lists.h"

/**
 * add_nodeint - add new node begining of list_t
 * @head: pointer to structure
 * @n: integer
 * Return: the adrres of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	if (*head != NULL)
		newNode->next = *head;
	if (*head == NULL)
		newNode->next = NULL;
	*head = newNode;
	return (*head);
}
