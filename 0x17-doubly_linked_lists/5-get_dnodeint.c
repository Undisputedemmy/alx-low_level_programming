#include "lists.h"
/**
 * get_dnodeint_at_index - gets the nth node of a listint_t.
 * @head: pointer to listsint_t
 * @index: index of the node
 * Return: nth node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	temp = head;
	for (i = 0; temp != NULL; i++)
	{
		if (i == index)/*find the index*/
			return (temp);
		temp = temp->next;
	}
	return (NULL);/*if index bigger than nodes*/
}
