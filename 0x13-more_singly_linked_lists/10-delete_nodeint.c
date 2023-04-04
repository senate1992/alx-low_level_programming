#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index of a listint_t
 *                           linked list.
 *
 * @head: Pointer to a pointer pointing to the head of the linked list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if successful, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}

	previous = *head;
	current = (*head)->next;

	for (i = 1; current != NULL && i < index; i++)
	{
		previous = current;
		current = current->next;
	}

	if (i == index && current != NULL)
	{
		previous->next = current->next;
		free(current);
		return (1);
	}

	return (-1);
}
