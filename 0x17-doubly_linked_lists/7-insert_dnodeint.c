#include "lists.h"

/**
*insert_dnodeint_at_index - inserts a new_node at index
*@h: pointer to the head of the linked_list.
*@idx: index where to insert the new_node
*@n: data to enter into new_node
*
*Return: ptr to a new_node or NULL if fail
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *next, *C_node;
unsigned int i;

if (h == NULL)
return (NULL);
if (idx != 0)
{
C_node = *h;
for (i = 0; i < idx - 1 && C_node != NULL; i++)
C_node = C_node->next;
if (C_node == NULL)
return (NULL);
}
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
if (idx == 0)
{
next = *h;
*h = new_node;
new_node->prev = NULL;
}
else
{
new_node->prev = C_node;
next = C_node->next;
C_node->next = new_node;
}
new_node->next = next;
if (new_node->next != NULL)
new_node->next->prev = new_node;
return (new_node);
}
