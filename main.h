#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;

int _printf(const char *format, ...);
int _putchar(char c);
#endif
