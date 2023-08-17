#include "variadic_functions.h"

/** 
*print_numbers - prints numbers followed by a new line
*@separator: the string between characters
*@n: the number of integers passed to function
*Return:nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list arg_ptr;
va_start(arg_ptr, n);

for (i = 0; i < n ; i++)
{
printf("%d", va_arg(arg_ptr, int));
if (separator == NULL)
printf("");
}
printf("\n");
va_end(arg_ptr);
}
