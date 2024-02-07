#include "search_algos.h"

/**
 * linear_search - search for element using linear search
 * @array: the array of element that will be searched
 * @size: the size of the array
 * @value: value to searched for
 * Return: the value the position of the element of -1 if not found
*/

int linear_search(int *array, size_t size, int value)
{
size_t i;

if (array == NULL)
return (-1);

for (i = 0; i < size; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}

return (-1);
}
