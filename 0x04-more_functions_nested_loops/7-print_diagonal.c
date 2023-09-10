#include "main.h"
/**
*print_diagonal - prints a diagonal
*@n:parameter
*Return:returns nothing
*/

void print_diagonal(int n)
{
int i, j;

if (n <= 0 )
_putchar('\n');
else
{
for (i = 0; i < n; i++ ){
if (i == 0){
_putchar(92);
_putchar('\n');
}else
{
j = 0;
while (j < i){
_putchar(' ');
j++;
}
_putchar(92);
_putchar('\n');
}

}
_putchar('\n');
}
}
