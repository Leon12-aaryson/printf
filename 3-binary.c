#include "main.h"

/**
* print_binary - this function prints given integer in binary
* @bin_listing: input parameter, containing integer
* value to be printed in binary
*
* Return: always return value of n
*/

int print_b(va_list bin_listing)
{
	unsigned int i, j, n, binary, array[32];

	i = 0, j = 0;

	/*assign n the value of next argument in variable argument list bin_listing*/
	n = va_arg(bin_listing, int);


	/*if n is less than 1, print 0 and return 1*/
	if (n < 1)
	{
		_putchar(48);
		j++;
		return (j);
	}
	else
	{
		/*if n>0, convert n to binary format. remainder stored in array in reverse)*/
		while (n > 0)
		{
			binary = n % 2;
			n = n / 2;
			array[j] = binary;
			j++;
		}
		for (i = j - 1; i > 0; i--)

			/*add ASCII value of each digit to value in array[i]*/
			_putchar('0' + array[i]);

		_putchar('0' + array[i]);
	}
	return (j); /*return number of digits in binary representation of n*/
}
