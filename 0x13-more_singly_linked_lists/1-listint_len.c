#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @head: pointer to the head node of the list
 *
 * Return: number of nodes in the list
 */

size_t listint_len(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;

	while (current != NULL)
	{
	count++;
	current = current->next;
	}

	return (count);
}
