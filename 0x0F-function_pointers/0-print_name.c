#include "function_pointers.h"

/**
 * print_name - a function prints a name.
 * @name: prins the given name
 * @f: function of name
 *
 * Rteurn: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == 0 || f == 0)
	  return;
	else
	  f(name);
}
