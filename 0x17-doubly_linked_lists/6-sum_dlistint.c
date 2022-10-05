#include "lists.h"
/**
 * sum_dlistint - sum of all the data of a list
 * @head: pointer to listint_t
 * Return: the sum, 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	if (head)
	{
		while (head)
		{
			result += head->n;
			head = head->next;
		}
		return (result);
	}
	else
		return (0);
}
