#include "lists.h"

/**
*listint_len - a function that returns the number of elements.
*
*@h: head of linked list node
*
*Return: the number of elements
*/

size_t listint_len(const listint_t *h)
{
size_t count = 0;

while (h != NULL)
{
h = h->next;
count++;
}
return (count);
}
