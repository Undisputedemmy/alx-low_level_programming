#include "lists.h"

/**
 * pop_listint - deletes the head.
 * @head: pointer to structure
 * Return: the head node's data
 */

int pop_listint(listint_t **head)
{
listint_t *temp;
int length = 0;

	if (*head == NULL || head == NULL)
		return (0);
	if (*head)
	{
		temp = *head;
		length = (*head)->n;
		*head = (*head)->next;
		free(temp);
	}
	return (length);
}
