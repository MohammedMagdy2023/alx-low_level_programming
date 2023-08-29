#include "lists.h"

/**
*pop_listint - a function that deletes the head node of a listint_t linked list
*@head: a double pointer
*
*Return: n
*/
int pop_listint(listint_t **head)
{
listint_t *start;
int n;

if (head == NULL || *head == NULL)
return (0);
start = *head;
*head = start->next;
n = start->n;
free(start);
return (n);
}
