#include "lists.h"

/**
 * get_nodeint_at_index - nth node data
 * @head: pointer to structure
 * @index: index of the node
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count = 0;

	temp = head;
	while (temp != NULL)
	{
		if (index == count)
		{
			head = temp;
			return (head);
		}
		count++;
		temp = temp->next;
	}
	return (NULL);
}
