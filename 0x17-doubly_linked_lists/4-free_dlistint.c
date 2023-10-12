#include "lists.h"

/**
*free_dlistint - clears a linked_list.
*@head: pointer to the head of the linked_list.
*
*Return: void
*/

void free_dlistint(dlistint_t *head)
{

while (head != NULL)
{
dlistint_t *next = head->next;

free(head);
head = next;
}
}
