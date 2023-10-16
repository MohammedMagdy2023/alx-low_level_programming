#include "lists.h"

/**
* sum_dlistint - sum of the data n of a linked_list.
*@head: pointer to the head of the linked_list.
*
*Return: sum or zero
*/

int sum_dlistint(dlistint_t *head)
{

int sum = 0;
dlistint_t *i;

for (i = head; i != NULL; i = i->next)
{
sum += i->n;
}

return (sum);
}
