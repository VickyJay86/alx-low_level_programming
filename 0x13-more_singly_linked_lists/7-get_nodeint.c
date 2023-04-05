#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to first node of linked list
 * @index: index of the node to return
 *
 * Return: A pointer to the nth element if it exists NULL otherwise.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t y;

	for (y = 0; (y < index) && (head->next); y++)
		head = head->next;

	if (y < index)
		return (NULL);

	return (head);
}
