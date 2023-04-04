#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @head: pointer to the first node in the linked list
 *
 * Return: number of elements in the free list
 */
size_t free_listint_safe(listint_t **head)
{
size_t len = 0;
int curr;
listint_t *temp;
if (!head || !*head)
return (0);
while (*head)
{
curr = *head - (*head)->next;
if (curr > 0)
{
temp = (*head)->next;
free(*head);
*head = temp;
len++;
}
else
{
free(*head);
*head = NULL;
len++;
break;
}
}
*head = NULL;
return (len);
}
