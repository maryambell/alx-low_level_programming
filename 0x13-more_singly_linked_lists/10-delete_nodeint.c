#include "lists.h"

/**
 * delete_nodeint_at_index - deletes nodes at index
 * @head: head of linked list
 * @index: index to be deleted
 * Return: 1 if succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int n;
listint_t *temp;
listint_t *rmovenode;

n = 0;
temp = *head;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(temp);
}
else
{
while (n < index - 1)
{
temp = temp->next;
if (temp == NULL)
return (-1);
n++;
}
rmovenode = temp;
rmovenode = rmovenode->next;
temp->next = rmovenode->next;
free(rmovenode);
}
return (1);
}
