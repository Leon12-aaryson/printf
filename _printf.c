#include "main.h"

/**
* _printf - function that produces output according to a format
* @format: The array to print and check type
* Return: the number of characters printed
* (excluding the null byte used to end output to strings)
*/

int _printf(const char *format, ...)
{
	int counter = -1;

	if (format != NULL)
	{
		int x;
		va_list ap;
		int (*m)(va_list);

		va_start(ap, format);

		if (format[0] == '%' && format[1] == '\0')
			return (-1);

		counter = 0;

		for (x = 0; format[x] != '\0'; x++)
		{
			if (format[x] == '%')
			{
				if (format[x + 1] == '%')
				{
					counter += _putchar(format[x]);
					x++;
				}
				else if (format[x + 1] != '\0')
				{
					m = get_function(format[x + 1]);
					counter += (m ? m(ap) : (_putchar(format[x]) + _putchar(format[x + 1])));
					x++;
				}
			}
			else
				counter += _putchar(format[x]);


		}
		va_end(ap);
	}
	return (counter);
}

