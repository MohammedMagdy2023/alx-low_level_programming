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
size_t mid, lower, upper;

if (array == NULL)
return (-1);

for (lower = 0, upper = size - 1; upper >= lower;)
{
printf("Searching in array: ");
for (mid = lower; mid < upper; mid++)
printf("%d, ", array[mid]);
printf("%d\n", array[mid]);

mid = lower + (upper - lower) / 2;
if (array[mid] == value)
return (mid);
if (array[mid] > value)
upper = mid - 1;
else
lower = mid + 1;
}

return (-1);
}
