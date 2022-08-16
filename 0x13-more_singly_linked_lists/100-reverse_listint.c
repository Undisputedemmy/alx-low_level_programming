#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: pointer to head
 * Return: pointer to head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *current, *next;

	if (head == NULL)
		return (0);
	prev = NULL;
	current = *head;
	next = NULL;
	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}
