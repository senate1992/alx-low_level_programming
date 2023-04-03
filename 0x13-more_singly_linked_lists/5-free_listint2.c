#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
    if (head == NULL) {
        return;  // Check for NULL pointer to list
    }
    
    listint_t *current = *head;
    while (current != NULL) {
        listint_t *next = current->next;  // Save the next pointer before freeing current
        free(current);
        current = next;
    }
    
    *head = NULL;  // Update the head pointer to point to NULL
}
