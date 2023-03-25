#include "main.h"

/**
* _printf - function that produces output according to a format
* @format: last argument in variadic function
* Return: the number of characters printed
* (excluding the null byte used to end output to strings)
*
*/

int _printf(const char *format, ...)
{
	int x, j = 0;
	va_list ap;

	va_start(ap, format);

	x = 0;
	while (format[x])
	{
		if (format[x] == '%')
		{
			switch (format[x + 1])
			{
				case 'c':
					j += _putchar(va_arg(ap, int));
					x += 2;
					break;
				case 's':
					j += _puts(va_arg(ap, char *));
					x += 2;
					break;
				case '%':
					j += _putchar('%');
					x += 2;
					break;
			}
			continue;
		}
		j += _putchar(format[x]);
		x++;
	}
	va_end(ap);
	return (j);
}

/**
* _putchar - prints out a character to stdout
* @c: character to be printed
* Return: on success 1
* on failure return -1
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* _puts - prints out the string without a new line character
* @s: string to be printed
* Return: The string
*/
int _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);

}
