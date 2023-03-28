#include "main.h"

/**
* print_p - this function prints out the memory address of a variable
* @ap: parameter holder or handler
* Return: returns value of j
*/

/* Function to handle %p conversion specifier */
int print_p(va_list ap)
{
	void *ptr = va_arg(ap, void*);
	char hex_str[32];
	int i, j = 0;

	/* Format the memory address as a hexadecimal string */
	sprintf(hex_str, "%p", ptr);

	/* Print the memory address */
	j += _putchar('0');
	j += _putchar('x');
	for (i = 2; hex_str[i] != '\0'; i++)
	{
		j += _putchar(hex_str[i]);
	}

	return (j);
}

