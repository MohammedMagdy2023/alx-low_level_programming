#include "main.h"
/**
* isdigit checks if the digit in range between 0 to 9
* @c: character to check 
*Return: return 0 or 1
*/

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return(1);

return(0);
}
