#include "lists.h"

/**
 * sum_listint - sum of all the data of a list
 * @head: pointer to structure
 * Return: the result
 */
int sum_listint(listint_t *head)
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
