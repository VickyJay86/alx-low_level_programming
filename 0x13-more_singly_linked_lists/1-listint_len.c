#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - computes the length of the linked list..
 * @h: pointer to a struct of linked list
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	unsigned int tally = 0;

	temp = h;
	while (temp)
	{
		tally++;
		temp = temp->next;
	}
	return (tally);
}
