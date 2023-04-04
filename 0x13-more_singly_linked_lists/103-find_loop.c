#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: searches for linked list
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head;
listint_t *move = head;
if (!head)
return (NULL);
while (slow && move && move->next)
{
move = move->next->next;
slow = slow->next;
if (move == slow)
{
slow = head;
while (slow != move)
{
slow = slow->next;
move = move->next;
}
return (move);
}
}
return (NULL);
}
