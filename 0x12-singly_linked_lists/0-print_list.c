#include "lists.h"

/**
*lenstr - return the lenth of a srting
*@s: the string to count
*
*Return:int
*/

int lenstr(char *s)
{
int i = 0;
if (!s)
return (0);
while (*s++)
i++;
return (i);  

}

/**
*print_list - print all elements
*@h: pointer to string 
*
*Return:sizeof list
*/

size_t print_list(const list_t *h)
{
size_t i = 0;
while (h)
{
printf("[%d] %s\n", lenstr(h->str), h->str ? h->str : "(nil)");
h = h->next;
i++;
}
return (i);
}
