#include "variadic_functions.h"
/**
*sum_them_all - a funtion that calculate the sum of  all given arguments
*@n:number of the args should be added
*Return: 0 if arguments number is 0
*/

int sum_them_all(const unsigned int n, ...)
{
/*declaring the function requiments */
int result;
unsigned int i;
va_list arg_ptr;

va_start(arg_ptr, n);

if (n == 0)
return (0);
for (i = 0 ; i < n ; i++)
{
result += va_arg(arg_ptr, unsigned int);
}
va_end(arg_ptr);
return (result);
}
