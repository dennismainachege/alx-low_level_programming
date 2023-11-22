#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node, starting at 0.
 *
 * Return: If successful, returns the address of the node at the specified
 *         index in the list. Otherwise, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *temp;

temp = head;

for (i = 0; temp != NULL && i < index; i++)
{
temp = temp->next;
}

if (i == index && temp != NULL)
{
return (temp);
}

return (NULL);
}
