#include "variadic_functions.h"
/**
*sum_them_all:a funtion that calculate given arguments
*@n:number of the args should be added
*return 0 if arguments number is 0
*/

int sum_them_all(const unsigned int n, ...)
{
/*declaring the function requiments */
int result;
unsigned int i;
va_list argptr;

va_start(argptr, n);

if (n == 0)
return (0);
for (i = 0 ; i < n ; i++)
{
result += va_arg(argptr, unsigned int);
}
va_end(argptr);
return(result)
}
