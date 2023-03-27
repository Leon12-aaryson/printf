#include "main.h"

/**
* print_int - prints intege value - %d
* @ap: variable argument list containing integer value to be printed
*
* Return: count of numbers printed
*/

int print_d(va_list ap)
{
	unsigned int absolute, x, y, j;
	int n;

	j = 0;

	n = va_arg(ap, int);

	if (n < 0)
	{
		absolute = (n * -1);
		j += _putchar(45);
	}
	else
		absolute = n;

	x = absolute;
	y = 1;
	while (x > 9)
	{
		x /= 10;
		y *= 10;
	}

	while (y >= 1)
	{
		j += _putchar(((absolute / y) % 10) + '0');
		y /= 10;
	}
	return (j);
}

/**
* print_int2 -prints the integers (%i)
* @ap: variable argument list
* Return: numbers printed
*
*/

int print_i(va_list ap)
{
	return (print_d(ap));
}


