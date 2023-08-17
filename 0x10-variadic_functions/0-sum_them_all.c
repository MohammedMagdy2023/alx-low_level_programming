#include "variadic_functions.h"
/**
*sum_them_all:a funtion that calculate given arguments
*@n:number of the args should be added
*return 0 if arguments number is 0
*/

int sum_them_all(const unsigned int n, ...)
{
va_list arg_ptr;
va_start(arg_ptr, n);
va_arg(arg_ptr, int);

int result;
unsigned int i;
if (n == 0)
{
return (0);
}
else
{
for (i == 0; i < n-1; i++)
{
result += va_arg(arg_ptr, int);
}
va_end(arg_ptr);
}
}
