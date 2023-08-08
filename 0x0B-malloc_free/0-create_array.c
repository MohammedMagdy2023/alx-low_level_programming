#include "main.h"

/**
* create_array - creates an array of chars, and
* initializes it with a specific char.
*@size: Size of the array
*@c: Character to insert
*Return: NULL if size is zero or if it fails,
*pointer to array if everything is normal.
*/

char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int index;

if (size == 0)
return (NULL);
ptr = malloc(sizeof(char) * size);

if (ptr == NULL)
return (NULL);

for (index = 0; index < size; index++)
ptr[index] = c;

return (ptr);
}
