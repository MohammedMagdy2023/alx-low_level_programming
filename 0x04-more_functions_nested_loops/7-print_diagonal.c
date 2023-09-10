#include "main.h"
/**
*print_diagonal - prints a diagonal
*@n:parameter
*Return:returns nothing
*/
void print_diagonal(int n)
{
int i;

if (n <= 0 )
_putchar('\n');
else
{
for (i = 0; i < n ; i++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
