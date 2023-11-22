#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If successful, returns the sum of all the data (n)
 * in the list. Otherwise, returns 0.
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp;

temp = head;

while (temp != NULL)
{
sum += temp->n;
temp = temp->next;
}

return (sum);
}
