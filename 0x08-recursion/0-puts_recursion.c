#include "main.h"
/**
*_puts_recursion is printing string and at the end puts a neqw line
*@s: string
*Return(0)
*/

void _puts_recursion(char *s)
{
if(*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
{
_putchar("\n");
}
}