#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: head of linked list
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *b;
listint_t *i;

b = NULL;
i = NULL;

while (*head != NULL)
{
i = (*head)->next;
(*head)->next = b;
b = *head;
*head = i;
}
*head = b;
return (*head);
}
