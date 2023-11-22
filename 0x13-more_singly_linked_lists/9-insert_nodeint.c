#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a
 * given position in a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 * @idx: The index of the list where the new node should
 * be added. Index starts at 0.
 * @n: The integer data for the new node.
 *
 * Return: If successful, returns a pointer to the new
 * node. Otherwise, returns NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *temp, *new_node;

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

temp = *head;
for (i = 0; i < idx - 1 && temp != NULL; i++)
temp = temp->next;

if (temp == NULL)
{
free(new_node);
return (NULL);
}

new_node->next = temp->next;
temp->next = new_node;

return (new_node);
}
