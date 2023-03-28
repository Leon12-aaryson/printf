#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

/**
* struct op - flag / function object
* @c: flag
* @f: function
*/
typedef struct op
{
	char *c;
	int (*f)(va_list);

} op_t;


int _printf(const char *format, ...);
int _putchar(char c);
int print_b(va_list bin_listing);
int print_c(va_list ap);
int print_s(va_list ap);
int print_d(va_list ap);
int print_i(va_list ap);
int print_u(va_list ap);
int print_o(va_list ap);
int print_x(va_list ap);
int print_X(va_list ap);
int print_p(va_list ap);
int (*get_function(char s))(va_list ap);

#endif
