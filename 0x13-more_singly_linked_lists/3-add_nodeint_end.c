#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of a listint_t.
 * @head: pointer of the the header.
 * @n: input data int
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newNode;
listint_t *tmp;
newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
return (NULL);
newNode->n = n;
newNode->next = NULL;
if (*head == NULL)
*head = newNode;
else
{
tmp = *head;
while (tmp->next != NULL)
tmp = tmp->next;
tmp->next = newNode;
}
return (newNode);
}
