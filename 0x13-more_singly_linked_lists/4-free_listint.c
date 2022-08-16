#include "lists.h"

/**
 * free_listint - frees a list.
 * @head: a list that enters to the function.
 */
void free_listint(listint_t *head)
{
listint_t *temp;

	if (head == NULL)
		free(head);
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
