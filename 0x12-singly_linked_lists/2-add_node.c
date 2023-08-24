#include "lists.h"

/**
* add_node - adds a new_node node at the beginning of a list
*@head: pointer to the head of the list
*@str: string to be added
*
* Return: returns the address to the new_node element or NULL
* if failed
*/

list_t *add_node(list_t **head, const char *str)
{
char *dop;
int len;
list_t *new_node;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

dop = strdup(str);
if (dop == NULL)
{
free(new_node);
return (NULL);
}
for (len = 0; str[len];)
len++;

new_node->str = dop;
new_node->len = len;
new_node->next = *head;

*head = new_node;

return (new_node);

}
