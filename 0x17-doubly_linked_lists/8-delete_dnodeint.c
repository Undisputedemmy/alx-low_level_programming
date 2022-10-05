#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node
 * @head: pointer to structure
 * @index: index of the node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *temp2;
	unsigned int count, count2;

	if (*head)
	{
		temp = *head;
		for (count2 = 0; temp != NULL; count2++)
			temp = temp->next;
		if (index < count2)
		{
			temp = *head;
			temp2 = (*head)->next;
			if (index == 0)
			{
				*head = (*head)->next;
				free(temp);
				if (*head)
					(*head)->prev = NULL;
			}
			else
			{
				for (count = 0; count < (index - 1); count++)
				{
					temp = temp->next;
					temp2 = temp->next;
				}
				temp->next = temp2->next;
				if (temp->next != NULL)
					temp2->prev = temp;
				if (count == (index - 1))
					free(temp2);
			}
		}
		else
			return (-1);
	return (1);
	}
	else
		return (-1);
}
