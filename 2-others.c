#include "main.h"

/**
* print_u - this function printsout unsigned integers
*
* @ap: paramater handler
* Return: returns value of j
*/

/* Function to handle %u conversion specifier */
int print_u(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	int j = 0;

	/* Convert unsigned integer to decimal and print */
	if (num == 0)
	{
		j += _putchar('0');
	}
	else
	{
		int digit;
		unsigned int divisor = 1;

		while (num / divisor > 9)
		{
			divisor *= 10;
		}
		while (divisor != 0)
		{
			digit = num / divisor;
			num %= divisor;
			divisor /= 10;
			j += _putchar(digit + '0');
		}
	}

	return (j);
}

/**
* print_o - to printout the octal value of a variable
*@ap: return value of argument
* Return: always returns j;
*/


/* Function to handle %o conversion specifier */

int print_o(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	int j = 0;

	/* Convert unsigned integer to octal and print */
	if (num == 0)
	{
		j += _putchar('0');
	}
	else
	{
		int digit;
		unsigned int divisor = 1;

		while (num / divisor > 7)
		{
			divisor *= 8;
		}

		while (divisor != 0)
		{
			digit = num / divisor;
			num %= divisor;
			divisor /= 8;
			j += _putchar(digit + '0');
		}
	}

	return (j);
}

/* Function to handle %x conversion specifier */

/**
* print_x - prints out the hexadecimal equiv of a vaue
*@ap: argument
* Return: Always return j
*/

int print_x(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	int j = 0;

	/* Convert unsigned integer to lowercase hexadecimal and print */
	if (num == 0)
	{
		j += _putchar('0');
	}
	else
	{
		int digit;
		unsigned int divisor = 1;

		while (num / divisor > 15)
		{
			divisor *= 16;
		}

		while (divisor != 0)
		{
			digit = num / divisor;
			num %= divisor;
			divisor /= 16;
			if (digit < 10)
			{
				j += _putchar(digit + '0');
			}
			else
			{
				j += _putchar(digit - 10 + 'a');
			}
		}
	}

	return (j);
}

/* Function to handle %X conversion specifier */

/**
* print_X - print hexa function
* @ap: argument declaration
* Return: returns a value j
*/

int print_X(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	int j = 0;

	/* Convert unsigned integer to uppercase hexadecimal and print */
	if (num == 0)
	{
		j += _putchar('0');
	}
	else
	{
		int digit;
		unsigned int divisor = 1;

		while (num / divisor > 15)
		{
			divisor *= 16;
		}

		while (divisor != 0)
		{
			digit = num / divisor;
			num %= divisor;
			divisor /= 16;
			if (digit < 10)
				j += _putchar(digit + '0');
			else
			{
				j += _putchar(digit - 10 + 'A');
			}
		}
	}

	return (j);
}

