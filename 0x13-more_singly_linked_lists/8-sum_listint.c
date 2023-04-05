#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Sums up  all the data (n) of a listint_t linked list.
 * @head: pointer to first node of linked list
 *
 * Return: The result of the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
