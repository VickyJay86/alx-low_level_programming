#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *  @head: pointer to head pointer of first node in linked list
 * @idx: index of list
 * @n: Input  integer
 *
 * Return: address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *ptr;
	unsigned int tally = 0;

	if (head == NULL)
		return (NULL);

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	ptr = *head;

	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (*head);
	}

	while (ptr != NULL)
	{
		if (tally == idx - 1)
		{
			temp->next = ptr->next;
			ptr->next = temp;
		}
		tally++;
		ptr = ptr->next;
	}
	if (idx > tally)
		return (NULL);
	return (temp);

}
