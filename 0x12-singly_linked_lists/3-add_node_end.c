#include "lists.h"

/**
 * add_node_end - add new node end of list_t
 * @head: pointer to structure
 * @str: string
 * Return: the adrres of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *newNode, *temp;
unsigned int length = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->str = strdup(str);
	while (str[length] != '\0')
	{
		length++;
	}
	newNode->len = length;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
	}
	return (*head);
}
