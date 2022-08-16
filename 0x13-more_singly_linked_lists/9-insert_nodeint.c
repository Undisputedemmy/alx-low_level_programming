#include "lists.h"

/**
 * insert_nodeint_at_index - insert node
 * @head: pointer to structure
 * @idx: index of the node
 * @n: data
 * Return: the nth node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *temp;
	unsigned int count = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	else
	{
	temp = *head;
	while (temp != NULL)
	{
		if (count == (idx - 1))
		{
			newNode->next = temp->next;
			temp->next = newNode;
			return (newNode);
		}
		temp = temp->next;
		count++;
	}
	return (NULL);
	}

}
