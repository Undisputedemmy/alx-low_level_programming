#include "lists.h"

/**
 * add_nodeint_end - add new node end of list_t
 * @head: pointer to structure
 * @n: integer
 * Return: the adrres of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newNode, *temp;


	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
	}
	return (*head);
}
