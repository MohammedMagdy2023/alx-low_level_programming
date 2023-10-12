#include "lists.h"

/**
*dlistint_len - returns the number of elements of linked_list.
*@h: pointer to the head of the list
*
*Return: number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
int i = 0;

if (h == NULL)
return (i);

while (h != NULL)
{
i++;
h = h->next;
}
return (i);
}
