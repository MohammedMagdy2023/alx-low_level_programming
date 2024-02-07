#include "search_algos.h"
/**
* binary_search - performs a binary search algorithm to find data
* @array: the array to search in it
* @size: the size of the array
* @value: the value to search
* Return: the value the position of the element of -1 if not found
*/

int binary_search(int *array, size_t size, int value)
{
size_t upper = size - 1, lower = 0, mid;

if (array == NULL)
return (-1);

while (lower < upper)
{
mid = (upper + lower) / 2;
print_array(array, lower, upper);
if (array[mid] < value)
{
lower = mid + 1;
}
else if (array[mid] > value)
{
upper = mid - 1;
}
else
{
return (mid);
}
}

return (-1);

}

/**                                                                             
* print_array - prints all elements in array                                    
* @array: the array to search in it                                                                         
* @start: the beginning of the print range
* @end: the end of the print range
*/

void print_array(int *array, size_t start, size_t end)
{
size_t i;

printf("Searching in array: ");
for (i = start; i < end; i++)
{
printf("%d, ", array[i]);
}
printf("%d\n", array[end]);
}
