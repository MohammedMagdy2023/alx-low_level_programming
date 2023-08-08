#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated
*space in memory, which contains a copy of the
*string given as a parameter.
*@str:String to be copied
*
*Return: NULL in case of error, pointer to allocated
*space
*/

char *_strdup(char *str)
{
char *ptr;
int index, len;

if (str == NULL)
return (NULL);

for (index = 0; str[index]; index++)
len++;
ptr = malloc(sizeof(char) * (len + 1));

if (ptr == NULL)
return (NULL);

for (index = 0; str[index]; index++)
{
ptr[index] = str[index];
}

ptr[len] = '\0';

return (ptr);

}
