#include "lists.h"

/**
*delete_dnodeint_at_index - deletes a node at index
*@head: pointer to the head of the linked_list.
*@index: index at which to delete node
*
*Return: 1 for success or -1 for fail
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *C_node;
unsigned int i;

if (head == NULL || *head == NULL)
return (-1);
C_node = *head;
if (index == 0)
{
*head = C_node->next;
if (C_node->next != NULL)
{
C_node->next->prev = NULL;
}
free(C_node);
return (1);
}
for (i = 0; i < index; i++)
{
if (C_node->next == NULL)
return (-1);
C_node = C_node->next;
}
C_node->prev->next = C_node->next;
if (C_node->next != NULL)
C_node->next->prev = C_node->prev;
free(C_node);
return (1);
}
