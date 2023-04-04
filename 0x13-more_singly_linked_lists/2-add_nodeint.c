include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of linked list
 * @head: double pointer to linked list
 * @n: Input data of new node
 *
 * Return: address of new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
