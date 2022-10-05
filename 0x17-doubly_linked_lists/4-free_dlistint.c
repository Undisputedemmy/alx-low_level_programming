#include "lists.h"
/**
 *free_dlistint - free a list
 *@head: pointer to list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
	free(temp);
}
