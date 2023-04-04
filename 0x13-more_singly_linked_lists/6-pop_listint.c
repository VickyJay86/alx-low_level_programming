#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to head pointer of list
 *
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int y = 0;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	y = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (y);
}
