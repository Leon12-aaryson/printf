#include "main.h"

/**
* print_c - prints out the characters %c
* @ap: argument list of characters to be printed
* Return: The number of characters printed
*/
int print_c(va_list ap)
{
	char c = va_arg(ap, int);

	return (_putchar(c));

}

/**
* print_s - prints string (%s)
* @ap: argument list of characters to be printed
* Return: number of strings printed
*
*/

int print_s(va_list ap)
{
	int n, count = 0;
	char *str;

	str = va_arg(ap, char *);

	if (str == NULL)
		str = "(nil)";


	for (n = 0; str[n]; n++)

		count += _putchar(str[n]);

	return (count);
}
