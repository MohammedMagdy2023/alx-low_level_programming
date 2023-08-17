#include "variadic_functions.h"

/** 
*print_numbers - prints numbers followed by a new line
*@separator: the string between characters
*@n: the number of integers passed to function
*Return:nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
int i;
va_list arg_ptr;
if (n == NULL)
{
printf("\n");
}
va_start(arg_ptr, n);

for (i = 0; i < n ; i++)
{
printf("%d%s", va_arg(arg_ptr, int), i ? (separator ? separator : "") : "\n");

}
va_end(arg_ptr);
}
