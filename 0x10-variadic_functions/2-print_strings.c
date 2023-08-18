#include "variadic_functions.h"

/**
*print_strings - prints string followed by a new line
*@separator: the string between characters
*@n: the number of integers passed to function
*Return:nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string_pointer;
	va_list arg_ptr;

	va_start(arg_ptr, n);
  /*return empty string if separator is empty*/
	if (separator == NULL)
		separator = "";
  /*return  string if separator isn't empty*/
	for (i = 0; i < n; i++)
	{
		string_pointer = va_arg(arg_ptr,char*);
		if (string_pointer == NULL)
			string_pointer = "(nil)";
		printf("%s", string_pointer);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg_ptr);
}
