#include <stdlib.h>
#include "lists.h"

/**
  * free_listint2 - frees a listint_t list.
  * @head: pointer to head pointer of list
  *
  * Return: 0 (success)
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head)
	{
		while (*head)
		{
			temp = (*head);
			*head = (*head)->next;
			free(temp);
		}
	}
	else
	{
		return;
	}

	free(*head);
	head = 0;
}
