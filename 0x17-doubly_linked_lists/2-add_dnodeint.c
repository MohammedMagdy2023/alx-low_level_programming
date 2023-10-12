#include "lists.h"

/**
*add_dnodeint - insert a new node at the beginning linked_list.
*@head: pointer to the head of the linked_list.
*@n: data to be added
*
*Return: the address of the inserted_node, or NULL if error.
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *inserted_node;

inserted_node = malloc(sizeof(dlistint_t));
if (inserted_node == NULL)
return (NULL);

inserted_node->n = n;
inserted_node->next = *head;
inserted_node->prev = NULL;
if (*head != NULL)
(*head)->prev = inserted_node;
*head = inserted_node;
return (inserted_node);
}
