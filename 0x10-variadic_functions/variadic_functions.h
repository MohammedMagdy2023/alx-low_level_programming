#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS


#include <stdio.h>
#include <stdarg.h>

typedef struct _printf{
char *_printf_ptr;
void (*_ptr)(va_list);
} _printf_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


#endif
