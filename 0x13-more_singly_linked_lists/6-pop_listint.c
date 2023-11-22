#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the listint_t list.
 *
 * Return: The integer value stored in the head node.
 *         If the linked list is empty, returns 0.
 */
int pop_listint(listint_t **head)
{
int n;
listint_t *temp;

if (head == NULL || *head == NULL)
return (0);

n = (*head)->n;
temp = *head;
*head = (*head)->next;
free(temp);

return (n);
}
