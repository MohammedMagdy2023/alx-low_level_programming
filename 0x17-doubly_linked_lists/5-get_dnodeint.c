#include "lists.h"

/**
*get_dnodeint_at_index - returns the nth node of the linked_list.
*@head: pointer to the head of the linked_list.
*@index: index of the node to return
*
*Return: (if not the node) ? NULL : index of the node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *n;
unsigned int i;

n = head;
i = 0;
while (n != NULL)
{
if (i == index)
return (n);
n = n->next;
i++;
}
return (NULL);
}
