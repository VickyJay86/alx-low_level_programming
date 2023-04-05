#include "lists.h"
#include <stdio.h>
/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list.
 * @head: pointer to head pointer of first node in a linked list
 * @index: index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *c_next;
	unsigned int tally = 0;

	ptr = *head;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}
	if (index == 1)
	{
		ptr = (*head)->next;
		(*head)->next = ptr->next;
		free(ptr);
		return (1);
	}
	while (tally < index - 1)
	{
		if (ptr->next == NULL)
			return (-1);
		tally++;
		ptr = ptr->next;
		c_next = ptr->next;
	}

	ptr->next = c_next->next;
	free(c_next);

	return (1);
}
