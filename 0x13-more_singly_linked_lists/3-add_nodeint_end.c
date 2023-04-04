#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of linked list
 * @head: double pointer to head of first linked list
 * @n: integer value of data in node
 *
 * Return: address of new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *ptr;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->next = NULL;
	temp->n = n;

	if (*head)
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = temp;
	}
	else
		*head = temp;
	return (temp);
}
