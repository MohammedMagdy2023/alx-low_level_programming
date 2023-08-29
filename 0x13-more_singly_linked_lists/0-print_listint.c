#include "lists.h"

/**
 *size_t print_listint - a function that prints all the elements of a listint_t list
 *
 *@h: The Head Of The Lists
 *
 *Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
const listint_t *ptr = h;
size_t ptr = 0;
while (ptr != NULL)
{
printf("%d\n", ptr->n);
ptr += 1;
ptr = ptr->next;
}
return (i)
}
