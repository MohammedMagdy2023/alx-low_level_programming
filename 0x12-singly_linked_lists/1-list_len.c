#include "lists.h"

/**
*list_len - function returns number of elements in a linked list_t list
*@h: pointer to the head element
*
*Return: size
*
*/

size_t list_len(const list_t *h)
{

size_t i = 0;
while (h)
{
h = h->next;
i++;
}
return (i);
}
